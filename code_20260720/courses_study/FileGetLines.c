#include <stdio.h>
#include <string.h>
#define N 32

int main(int argc, const char *argv[])
{
	FILE * fp = NULL;
	int cout = 0;
	char buf[N] = {0};
	if ((fp = fopen("test.txt", "a+")) == NULL) {
		perror("fopen");
		return -1;
	}

	while(1) {
		if (fgets(buf, N, fp) == NULL) {
			perror("fgets");
			break;
		}
		if (buf[strlen(buf)-1] == '\n') {
			cout++;
		}
	}
	printf("cout=%d\n", cout);

	fclose(fp);
	return 0;
} 
