#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a[5][5];
	int (*p)[4];
	p = a;

	printf("%d\n", &p[2][1] - &a[2][1]);

	return 0;
}
