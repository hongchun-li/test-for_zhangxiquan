#include <stdio.h>

int main(int argc, const char *argv[])
{
	int c;
	FILE * fp = NULL;
	if ((fp = fopen("test.txt", "r++")) == NULL) {
		perror("fopen\n");
		return -1;
	}
	printf("fopen success\n");

	while(1) {
#if 0
		if ((c = fgetc(fp)) == EOF) {
			perror("fgetc");
			break;
		}
#else
		if ((c = getc(fp)) == EOF) {
			perror("getc");
			break;
		}
#endif
		printf("%c", (char)c);
	}
	fclose(fp);
	return 0;
}
