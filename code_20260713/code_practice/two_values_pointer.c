#include <stdio.h>

void fun_swap(int * p, int * q);

int main(int argc, const char *argv[])
{
	int m = 10, n = 20;

	fun_swap(&m, &n);
	printf("m=%d n=%d\n", m, n);

	return 0;
}


void fun_swap(int * p, int * q) {
	int t = *p;
	*p = *q;
	*q = t;
}
