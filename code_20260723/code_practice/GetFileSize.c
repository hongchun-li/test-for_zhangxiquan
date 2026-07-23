#include <stdio.h>

int main(int argc, const char *argv[])
{
	FILE * fp = NULL;
	long file_size = 0;

	if (argc < 2) {
		printf("Usage: %s <source file>\n", argv[0]);
		return -1;
	}
	if ((fp = fopen(argv[1], "r")) == NULL) {
		printf("fopen source file failed\n");
		return -1;
	}
	fseek(fp, 0, SEEK_END);
	file_size = ftell(fp);

	printf("file_size:%ld\n", file_size);
	fclose(fp);
	return 0;
}
