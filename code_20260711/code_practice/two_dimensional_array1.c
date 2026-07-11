#include <stdio.h>

int main() {
	int a[3][2] = {{2, 9}, {2, 8}, {5, 7}};
	int line_num;
	int column_num;
	int i, j;

	line_num = sizeof(a) / sizeof(a[0]);
	printf("line number=%d\n", line_num);
	column_num = sizeof(a[0]) / sizeof(int);
	printf("column_num=%d\n", column_num);

	for (i = 0; i < line_num; i++) {
		for (j = 0; j < column_num; j++) {
			printf("%d ", a[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
