#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i = 1, sum = 0;
	while (i < 100) {
		if (i % 2 == 0) {
			sum += i;
		}
		i++;
	}
	printf("sum=%d\n", sum);
	return 0;
} 
