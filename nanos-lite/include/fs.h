#ifndef __FS_H__
#define __FS_H__

#include <common.h>
#include <stdio.h>
#include <time.h>
#ifndef SEEK_SET
enum {SEEK_SET, SEEK_CUR, SEEK_END};
#endif
struct timezone1 {
	int	tz_minuteswest;	/* minutes west of Greenwich */
	int	tz_dsttime;	/* type of dst correction */
};
struct timeval1 {
	int		tv_sec;		/* seconds */
	int		tv_usec;	/* and microseconds */
};

int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);
int gettimeofday1(struct timeval1 *tv, struct timezone1 *tz);
#endif
