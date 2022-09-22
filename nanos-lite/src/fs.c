#include <fs.h>
typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  size_t open_offset;   // xingk
  ReadFn read;
  WriteFn write;
} Finfo;

//enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENT, FD_INFO, FD_FB};
enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENT, FD_INFO, FD_FB, FD_AM};
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
  [FD_STDIN]  = {"stdin", 0, 0, 0,invalid_read, serial_write},
  [FD_STDOUT] = {"stdout", 0, 0, 0,invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, 0,invalid_read, serial_write},
  [FD_EVENT] = {"/dev/events",0,0,0,events_read,invalid_write},
  [FD_INFO] = {"/proc/dispinfo",0,0,0,dispinfo_read,invalid_write},
  [FD_FB] = {"/dev/fb",0,0,0,invalid_read,fb_write},
  [FD_AM] = {"/dev/am",0,0,0,am_read,am_write},
#include "files.h"
};

int fs_open(const char *pathname, int flags, int mode){
  int len = sizeof(file_table)/sizeof(Finfo);
  for(int i = 0; i< len; i++){
    if(strcmp(file_table[i].name,pathname) == 0){return i;};
  }
  return -1;
}

size_t fs_read(int fd, void *buf, size_t len){
  if(file_table[fd].read != NULL){
    return file_table[fd].read(buf,file_table[fd].open_offset,len);
  }
  size_t size = file_table[fd].size;
  size_t offset = file_table[fd].disk_offset + file_table[fd].open_offset;
  if(len+file_table[fd].open_offset > size)len = size - file_table[fd].open_offset;
  ramdisk_read(buf,offset,len);
  file_table[fd].open_offset +=len;
  return len;
}

size_t fs_write(int fd, const void *buf, size_t len){
  if(file_table[fd].write != NULL){
    //printf("0x%x\n",(__uint32_t)((uint64_t)buf));
    return file_table[fd].write(buf,file_table[fd].open_offset,len);
  }
  size_t size = file_table[fd].size;
  size_t offset = file_table[fd].disk_offset + file_table[fd].open_offset;
  if(len+file_table[fd].open_offset > size)len = size - file_table[fd].open_offset;
  ramdisk_write(buf,offset,len);
  file_table[fd].open_offset +=len;
  return len;
}

size_t fs_lseek(int fd, size_t offset, int whence){
  if(whence == SEEK_SET){
    file_table[fd].open_offset = offset;
  }else if(whence == SEEK_CUR){
    file_table[fd].open_offset += offset;
  }else if(whence == SEEK_END){
    file_table[fd].open_offset = file_table[fd].size;
  }else{

    panic("fs_lseek should not reach here");
    return -1;
  }
  return file_table[fd].open_offset;
}

int fs_close(int fd){
  file_table[fd].open_offset = 0;
  return 0;
}


int gettimeofday(struct timeval *tv, struct timezone *tz)
{
  uint64_t us = io_read(AM_TIMER_UPTIME).us;
  tv->tv_sec = us/1000000;
  tv->tv_usec = us % 1000000;
  return 0;
}

void init_fs() {
  // TODO: initialize the size of /dev/fb

}
