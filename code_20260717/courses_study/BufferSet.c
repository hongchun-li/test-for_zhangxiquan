#include <stdio.h>
#include <unistd.h>
int main(int argc, const char *argv[])
{
	printf("a");
	sleep(5);

	setbuf(stdout, NULL);

	printf("b");
	sleep(5);

	return 0;
}
