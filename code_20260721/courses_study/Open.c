#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
	int fd = -1;
#if 0
	if ((fd = open("3.txt", O_RDONLY)) < 0) {
		printf("open error!\n");
		return -1;
	}
	printf("open success!\n");
#else
	if ((fd = open("4.txt", O_CREAT|O_RDONLY|O_EXCL. 0664)) < 0) {
		printf("open error\n");
		return -1;
	} 
	printf("open success!\n");
#endif

	if (!close(fd)) {
		printf("close success!\n");
	}

	return 0;
}
