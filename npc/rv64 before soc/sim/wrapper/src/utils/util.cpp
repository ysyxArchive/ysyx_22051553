#include<stdio.h>

char fsimg_path[512] = "";

inline void get_fsimg_path(char *newpath, const char *path) {
  sprintf(newpath, "%s%s", fsimg_path, path);
}