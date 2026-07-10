#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i, sum = 0;
	int a = 0;
	int b = 0;
	for (i = 50; i <= 100; i++) {
		if (i % 2 != 0) {
			printf("%d ", i);
			sum++;
			a += sum;
			b += i;

		}

	}
	printf("\nsum=%d\n", sum);
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}
