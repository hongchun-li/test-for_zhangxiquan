#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a[3][3] = {{3, 6, 19}, {2, 6, 1}, {12, 56, 91}};
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j <= i; j++) {
			printf("%d  ", a[i][j]);
		}
		putchar('\n');
	}


	return 0;
}
