#include <stdio.h>
 
int main(int argc, const char *argv[])
{
	int a[10];
	int i;
	int max;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	max = a[0];
	for (i = 1; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	printf("max=%d\n", max);

	return 0;
}
