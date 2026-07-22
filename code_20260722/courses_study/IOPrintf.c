#include <stdio.h>
int main(int argc, const char *argv[])
{
	char buf[32] = {0};

	FILE *fp = NULL;
	if ((fp = fopen(argv[1], "a+")) == NULL) {
		perror("fopen");
		return -1;
	}
	fprintf(fp, "%s", "hello");
	fscanf(stdin, "%s", buf);
	fprintf(fp, "%s", buf);
	fclose(fp);

	return 0;
}
