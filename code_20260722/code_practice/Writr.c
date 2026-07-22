#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <string.h>
#define N 20

int main(int argc, const char *argv[])
{
	int fd = -1, n = 0;
	char buf1[N] = {0};
	char buf2[N] = "hello world";
	if (argc < 2) {
		printf("Usage: %s <file>\n", argv[0]);
		return -1;
	}
#if 1
	if ((fd = open(argv[1], O_RDWR)) == EOF) {
		printf("open error\n");
		return -1;
	}
	printf("open success\n");
#elif 0
	if ((fd = open(argv[1], O_RDONLY)) == EOF) {
		printf("open error\n");
		return -1;
	}
	printf("open success\n");
#else
	if ((fd = open(argv[1], O_WRONLY)) == EOF) {
		printf("open error\n");
		return -1;
	}
	printf("open success\n");

#endif
	if ((n = read(fd, buf1, N)) < 0) {
		printf("Read error\n");
		return -1;
	}
	printf("Read charcters: %s", buf1);
	printf("Finished reading\n");
	do {
		n = write (fd, buf2, strlen(buf2));
	} while (n < 0);
	printf("Write characters: %d\n", n);
	printf("Finished writing\n");

	close(fd);
	return 0;
}
