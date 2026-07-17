#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#define N 20

int main(int argc, const char *argv[])
{
	int fd = -1;
	int ret = 0;
	char buf[N] = {0};
	if (argc < 2) {
		printf("Usage : %s <file>\n", argv[0]);
		return -1;
	}
	 if ((fd = open(argv[1], O_RDWR|O_CREAT, 0664)) == EOF) {
		 printf("open error\n");
		 return -1;
	 }
	 printf("open success\n");

	 ret = lseek(fd, 0, SEEK_CUR);
	 printf("%u\n", ret);

	 read(fd, buf, 10);
	 printf("%s", buf);
	 ret = lseek(fd, 0, SEEK_CUR);
	 printf("%u\n", ret);

	 lseek(fd, 0, SEEK_END);
	 write(fd, "aaa", strlen("aaa"));
	 ret = lseek(fd, 0, SEEK_CUR);
	 printf("%u\n", ret);

	 ret = lseek(fd, 0, SEEK_SET);
	 printf("%u\n", ret);
	 bzero(buf, sizeof(buf));
	 while (read(fd, buf, sizeof(buf) > 0)) {
		 printf("%s", buf);
		 bzero(buf, sizeof(buf));
	 }
	 printf("Read end\n");

	 close(fd);
	 return 0;
}
