#include <fs.h>
#include <common.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);

size_t serial_write(const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset;
} Finfo;


enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB, FD_EVENTS};

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
  [FD_EVENTS] = {"/dev/events", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

#define NR_FILES (int)(sizeof(file_table)/sizeof(file_table[0]))



int fs_open(const char *pathname, int flags, int mode){
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

  if(fd <= FD_STDERR){
    assert(0);
  }
  else if(fd == FD_EVENTS){
    
  }
  else {
    size_t real_len = 0;

    if(file_table[fd].disk_offset+file_table[fd].open_offset + len > file_table[fd].disk_offset + file_table[fd].size){
      real_len = (file_table[fd].disk_offset + file_table[fd].size) - (file_table[fd].disk_offset+file_table[fd].open_offset);
    }
    else {
      real_len = len;
    }
    ramdisk_read(buf, file_table[fd].disk_offset+file_table[fd].open_offset, real_len);
    file_table[fd].open_offset += real_len;
    return real_len;
  }


}

size_t fs_write(int fd, const void *buf, size_t len){

  if(fd == 1 || fd == 2){
    return file_table[fd].write(buf, 0, len);
  }
  else 
  {  
    size_t real_len = 0;

    if(file_table[fd].disk_offset+file_table[fd].open_offset + len > file_table[fd].disk_offset + file_table[fd].size){
      real_len = file_table[fd].disk_offset + file_table[fd].size - (file_table[fd].disk_offset+file_table[fd].open_offset);
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
}
