#include <stdio.h>
#define N 512

int main(int argc, const char *argv[])
{
	FILE *fp_r = NULL, *fp_w = NULL;
	if (argc < 3) {
		printf("Usage: %s <source file> <destionation file>\n", argv[0]);
		return -1;
	}

	if ((fp_r = fopen(argv[1], "r")) == NULL) {
		printf("fopen source file failed\n");
		return -1;
	}

	if ((fp_w = fopen(argv[2], "a+")) == NULL) {
		printf("fopen destionation file failed\n");
		return -1;
	}

	char buf[N] = {0};
	size_t bytes_read, bytes_write;

	while (1) {
		if (feof(fp_r)) {
			printf("read file in last line");
			break;
		}
		
		if ((bytes_read = fread(buf, 1, sizeof(buf), fp_r)) < 0) {
			printf("fread failed\n");
			goto END;
		}

		if ((bytes_write = fwrite(buf, 1, bytes_read, fp_w)) < 0) {
			printf("fwrite failed\n");
			goto END;
		}
		if (bytes_read != bytes_write) {
			printf("failed to write to destination file\n");
			goto END;
		}
		bzero(buf, sizeof(buf));
	}
	printf("file copied successfuly from '%s' to '%s' \n", argv[1]. argv[2]);
	
END:
	fclose(fp_r);
	fclose(fp_w);
	return 0;

}
