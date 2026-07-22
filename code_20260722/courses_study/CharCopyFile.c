#include <stdio.h>

int main(int argc, const char *argv[])
{
	FILE *fp_a = NULL, *fp_b = NULL;
	int c = 0;
	if (argc < 3) {
		printf("Usage: %s <be copied file> <copied file>\n", argv[0]);
		return -1;
	}

	if ((fp_a = fopen(argv[1], "r+")) == NULL) {
		perror("be copied file fopen");
		return -1;
	}
	if ((fp_b = fopen(argv[2], "w+")) == NULL) {
		perror("copied file fopen");
		fclose(fp_a);
		return -1;
	}
	printf("fopen files ok\n");

	do {
		if ((c = fgetc(fp_a)) == EOF) {
			perror("fgetc");
			break;
		}
		if (fputc(c, fp_b) == EOF) {
			perror("fputc");
			break;
		}
	}
		while (1);
		fclose(fp_a);
		fclose(fp_b);
		return 0;
}
