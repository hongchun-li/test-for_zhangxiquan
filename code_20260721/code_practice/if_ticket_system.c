#include <stdio.h>

int main() {
	int month, age, ticket = 60;

	printf("input month:");
	scanf("%d", &month);
	printf("input age:");
	scanf("%d", &age);

	if (month >= 4 && month <= 10) {
		if (age >= 18 && age <= 60) {
			printf("%d 60 RMB\n", age);
		} else if (age > 0 && age < 18 ) {
			printf("%d %d RMB\n", age, ticket / 2);
		} else if (age > 60 ) {
			printf("%d %d RMB\n", age, ticket / 3);
		} else {
			printf("age is invalid\n");
		}
	} else {
		if (age >= 18 && age <= 60) {
			printf("%d 40 RMB\n", age);
		} else if (age > 0) {
			printf("%d 20 RMB\n", age);
		} else {
			printf("age is invalid\n");
		}
	}

	return 0;
}
