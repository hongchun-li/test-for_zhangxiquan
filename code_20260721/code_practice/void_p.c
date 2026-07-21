#include <stdio.h>

int main() {
	int a = 10;
	float b = 3.14;
	char c = 'c';

	void * p;

	p = &a;
	printf("int:%d %d\n", a, *(int *)p);

	p = &b;
	printf("float:%f %f\n", b, *(float *)p);

	p = &c;
	printf("char:%c %c\n", c, *(char *)p);

	return 0;
}
