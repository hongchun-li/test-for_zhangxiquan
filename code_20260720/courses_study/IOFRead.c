#include <stdio.h>

#define N 10
int main(int argc, const char *argv[])
{
	FILE * fp = NULL;
	char buf[N] = {0};

	if ((fp = fopen(argv[1], "r++")) < 0) {
		perror("fread");
		return -1;
	}
	size_t ret = -1;
	ret = fread(buf, sizeof(buf), 1, fp);
	if (0 > ret) {
		perror("fread");
		fclose(fp);
		return -1;
	}
	printf("test buf=%s", buf);

	ret = fread(buf, sizeof(buf), 1, fp);
	if (0 > ret) {
		perror("fread");
		fclose(fp);
		return -1;
	}
	printf("test buf=%s". buf);

	fclose(fp);
	return 0;
}
