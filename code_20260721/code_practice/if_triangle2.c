#include <stdio.h>

int main() {
	float a, b, c;
	printf("input a b c:");
	scanf("%f%f%f", &a, &b, &c);

	if (a + b > c && b + c > a && a + c > b) {
		if (a == b && b == c) {
			printf("deng bian\n");
		} else if (a == c || b == c || a ==b) {
			if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
				printf("deng yao zhi jiao\n");
			} else {
				printf("deng yao\n");
			}
		} else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
			printf("zhi jiao\n");
		}
	} else {
		printf("not a triangle\n");
	}

	return 0;
}
