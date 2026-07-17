#include <stdio.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
	int i = 0;
#if 0
	do {
		printf("a");
		i++;
	} while (i < 100);
#else
	do {
		printf("a");
		i++;
	} while (i < 1025);
#endif
	sleep(10);
	return 0;
}
