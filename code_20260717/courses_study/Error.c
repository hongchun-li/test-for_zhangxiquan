#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main(int argc, const char *argv[])
{
	FILE * fp = NULL;
#if 0
	if ((fp = fopen("test.txt", "r")) == NULL) {
		printf("errno:%d\n", errno);
		perror("fopen:");
		return -1;
	}
#else
	if ((fp = fopen("test.txt", "r")) == NULL) {
		printf("errno:%d\n", errno);
		printf("fopen:%s", strerror(errno));
		return -1;

	}
#endif
	printf("errno:%d\n", errno);
	perror("perror:");

	sleep(3);

	fclose(fp);

	return 0;
}
