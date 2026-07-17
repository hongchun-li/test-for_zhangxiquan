#include <stdio.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
	perror("aaa");
#if 1
	while(1) {
		sleep(1);
	}
#endif
	return 0;
}
