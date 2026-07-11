#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 10, b = 20, c = 20;
	int * p[3];

	p[0] = &a;
	p[1] = &b;
	p[2] = &c;

	printf("a-b-c:%d %d %d\n", a, b, c);
	printf("%d %d %d\n", *p[0], *p[1], *p[2]);
	printf("%p %p %p\n", &a, &b, &c);
	printf("%p %p %p\n", p[0], p[1], p[2]);

	printf("sizeof:%ld\n", sizeof(p));
	printf("%p %p\n", p, p + 1);

	return 0;
}
