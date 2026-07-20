#include <stdio.h>

int main(int argc, const char *argv[])
{
	int c;
	FILE * fp = NULL;
	if ((fp = fopen("test.txt", "a+")) == NULL) {
		perror("fopen\n");
		return -1;
	}
	printf("fopen success\n");

#if 1
		if ((c = fputc('a', fp)) == EOF) {
			perror("fputc");
			return -1;
		}
#elif 0
		if ((c = putc('a', fp)) == EOF) {
			perror("putc");
			return -1;
		}
#else
	putchar('b');

#endif
	c = fputc('a', fp);
	printf("c = %c\n", c);

	fclose(fp);
	return 0;
}
