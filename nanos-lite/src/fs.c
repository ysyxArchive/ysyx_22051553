#include <fs.h>
#include <common.h>

extern uint8_t ramdisk_start;

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_alignread(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);

size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len);
size_t dispinfo_read(void *buf, size_t offset, size_t len);
size_t fb_write(const void *buf, size_t offset, size_t len);
size_t fbsync_write(const void *buf, size_t offset, size_t len);
size_t screeninfo_write(const void *buf, size_t offset, size_t len);

bool bmp_read = 0;
unsigned int append_head = 0;
size_t bmp_breakaddr = 0;

uint8_t bmp_buf[8] = {};


typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;
} Finfo;


enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS, FD_DISPINFO , FD_FB, FD_SYNC}; //特殊文件

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}


size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_EVENTS] = {"/dev/events", 0, 0, events_read, invalid_write},
  [FD_DISPINFO] = {"/proc/dispinfo", 0, 0, dispinfo_read, screeninfo_write},
  [FD_FB] = {"/dev/fb", 0, 0, invalid_read, fb_write},
  [FD_SYNC] = {"/dev/fb_sync", 0, 0, invalid_read, fbsync_write},
#include "files.h"
};

#define NR_FILES (int)(sizeof(file_table)/sizeof(file_table[0]))



int fs_open(const char *pathname, int flags, int mode){
  if(!strcmp(pathname, "/dev/events") == 0){
    printf("path is %s\n", pathname);
  }
  
  for(int i = 0; i < NR_FILES; i ++){
    if(strcmp(file_table[i].name, pathname) == 0){
      file_table[i].open_offset = 0;
      return i;
    }
  }

  assert(0);
  return 0;
}

size_t fs_read(int fd, void *buf, size_t len){

  // printf("reading file is %s\n", file_table[fd].name);

  if(file_table[fd].read != NULL){
    return file_table[fd].read(buf, file_table[fd].open_offset, len);
  }
  else {
    size_t real_len = 0;

    if(file_table[fd].open_offset + len > file_table[fd].size){
      real_len = (file_table[fd].size) - (file_table[fd].open_offset);
    }
    else {
      real_len = len;
    }

    //判断是否为bmp
    char *dot = strrchr(file_table[fd].name, '.');
    // if((dot == NULL || strcmp(dot, ".bmp") != 0) && bmp_read == 1){ //结束bmp读取，恢复
    //   memcpy(&ramdisk_start+bmp_breakaddr, bmp_buf, append_head);
    //   bmp_read = 0;
    //   append_head = 0;
    // }

    if(dot != NULL && strcmp(dot, ".bmp") == 0 && file_table[fd].open_offset != 0 && bmp_read == 0){
      bmp_read = 1;
      size_t base_addr = file_table[fd].disk_offset+file_table[fd].open_offset;
      append_head = base_addr & 0x7;
      bmp_breakaddr = base_addr - append_head;
      memcpy(bmp_buf, &ramdisk_start+bmp_breakaddr, append_head);
      memset(&ramdisk_start+bmp_breakaddr, 0, append_head); //赋值0
      file_table[fd].open_offset -= append_head;
    }
    
    // if(dot != NULL && strcmp(dot, ".bmp") == 0 && file_table[fd].open_offset != 0){
    //   printf("offset is %p\n", &ramdisk_start + file_table[fd].disk_offset+file_table[fd].open_offset);
      printf("real_len is %d\n", real_len);
    // }
    
    ramdisk_read(buf, file_table[fd].disk_offset+file_table[fd].open_offset, real_len);

    if((dot != NULL && strcmp(dot, ".bmp") == 0 && file_table[fd].open_offset != 0 && real_len < 1024) && bmp_read == 1){ //回复， 注意bmp的最后real_len有0
      memcpy(&ramdisk_start+bmp_breakaddr, bmp_buf, append_head);
      bmp_read = 0;
      append_head = 0;
    }

    file_table[fd].open_offset += real_len;

    return real_len;
  }


}

size_t fs_write(int fd, const void *buf, size_t len){

  if(file_table[fd].write != NULL){
    int n = file_table[fd].write(buf, file_table[fd].open_offset, len);
    file_table[fd].open_offset += len;   //同样需要修改偏移量
    return n;
  }
  else 
  {  
    size_t real_len = 0;

    if(file_table[fd].open_offset + len > file_table[fd].size){
      real_len = file_table[fd].size - file_table[fd].open_offset;
    }
    else {
      real_len = len;
    }

    ramdisk_write(buf, file_table[fd].disk_offset+file_table[fd].open_offset, real_len);

    file_table[fd].open_offset += real_len;

    return real_len;
  }
}

size_t fs_lseek(int fd, size_t offset, int whence){

  switch (whence)
  {
    case SEEK_SET: file_table[fd].open_offset = offset; break;
    case SEEK_CUR: file_table[fd].open_offset = file_table[fd].open_offset + offset; break;
    case SEEK_END: file_table[fd].open_offset = file_table[fd].size + offset; break;
    default: assert(0);break;
  }

  return file_table[fd].open_offset;

}

int fs_close(int fd){
  return 0;
}


size_t fs_begin(int fd){
  return file_table[fd].disk_offset;
}





void init_fs() {
  // TODO: initialize the size of /dev/fb
  AM_GPU_CONFIG_T ev_gpuconf = io_read(AM_GPU_CONFIG);
  file_table[FD_FB].size = ev_gpuconf.width * ev_gpuconf.height;
  
}
