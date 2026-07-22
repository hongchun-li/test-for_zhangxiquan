#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define N 20
int main(int argc, const char *argv[])
{
	int fd = -1, n = 0, total = 0;
	char buf[20] = {0};
	if (argc < 2) {
		printf("Usage : %s <file>\n", argv[0]);
		return -1;
	}

	if ((fd = open(argv[1], O_RDWR)) == EOF) {
		printf("open error\n");
		return -1;
	}
	printf("open success\n");
	while ((n = read(fd, buf, N)) > 0) {
			printf("%s", buf);
			total += n;
	}
	printf("Read characters: %d\n", total);
	printf("Finished reading\n");

	close(fd);
	return 0;
}
