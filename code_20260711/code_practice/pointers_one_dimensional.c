#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a[] = {2, 6, 7, 8, 3, 89};
	int i;

	printf("%p\n", a);
	printf("%ld\n", sizeof(a));

	for (i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("%p ", a + i);
	}
	putchar('\n');

	for (i = 0; i < sizeof(a) / sizeof(int); i++) {
		printf("%d %d \n", *(a + i), a[i]);
	}
	putchar('\n');

	return 0;
}
