#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#define N 32

int main(int argc, const char *argv[])
{
	FILE * fp = NULL;
	char buf[N] = {0};
	int linecount = 0;
	time_t t;

	if (argc < 2) {
		printf("Usage: %s <filename>\n", argv[0]);
		return -1;
	}
	if ((fp = fopen(argv[1], "a++")) == NULL) {
		perror("fopen");
		return -1;
	}

	while (fgets(buf, N, fp) != NULL) {
		size_t len = strlen(buf);
		if (len > 0 && buf[len-1] == '\n') {
			linecount++;
		}
	}

	while (1) {
		linecount++;
		t = time(NULL);
		memset(buf, 0, sizeof(buf));
		sprintf(buf, "%d,%s", linecount, ctime(&t));

		size_t ret = fwrite(buf, strlen(buf), 1, fp);
		if (ret != 1) {
			perror("fwrite");
			break; 
		}
		fflush(fp);
		sleep(1);
	}

	fclose(fp);
	return 0;
}
