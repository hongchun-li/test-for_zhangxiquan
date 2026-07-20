#include <stdio.h>
#define N 32
#define M 6
int main(int argc, const char *argv[])
{
	FILE * fp = NULL;
	char buf[M] = {0};
	if ((fp = fopen("test.txt", "r+")) == NULL) {
		perror("fopen");
		return -1;
	}
	while(1) {
		if (fgets(buf, M, fp) == NULL) {
			perror("fgets");
			break;
		}
		printf("test look:%s", buf);
	}
	printf("fgets from file ok\n");

	fclose(fp);
	return 0;
}
