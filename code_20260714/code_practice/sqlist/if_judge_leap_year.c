#include <stdio.h>

int main() {
	int year;
	printf("input year:");
	scanf("%d", &year);

	if ((year % 1 == 0 && year % 100 !=0) || (year % 400 == 0)) {
		printf("%d is leap year\n", year);
		printf("Feb have 29 days\n");
	} else {
		printf("%dis not leap year\n", year);
		printf("Feb have 28 days\n");
	}
	return 0;
}
