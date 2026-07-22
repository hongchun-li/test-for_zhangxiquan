#include <stdio.h>
#define N 32

int main(int argc, const char *argv[])
{
	FILE * fp = NULL;
	char buf[N] = {0};
	if ((fp = fopen("test.txt", "a+")) == NULL) {
		perror("fopen");
		return -1;
	}

	if(fgets(buf, N, stdin) == NULL) {
		perror("fgets");
		fclose(fp);
		return -1;
	}
	if (fputs(buf, fp) == EOF) {
		perror("fpues");
		fclose(fp);
		return -1;
	}

	printf("fputs ok\n");
	fclose(fp);
	return 0;
}
