#include <stdio.h>

int main(int argc, const char *argv[])
{
	FILE * fp = NULL;
	if ((fp = fopen("test.txt", "r")) == NULL) {
		printf("fopen errer\n");
		return -1;
	}
	printf("fopen success\n");

	fclose(fp);

	return 0;
}
