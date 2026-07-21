#include <stdio.h>

int main() {
	int score;
	printf("input a score:");
	scanf("%d", &score);

	if (score < 0 || score > 100 ) {
		printf("%d is invalid\n", score);
		return 0;
	}

	if (score >= 90) {
		printf("%d-A\n", score);
	} else if (score >= 80) {
		printf("%d-B\n", score);
	} else if (score >= 70) {
		printf("%d-C\n", score);
	} else if (score >= 60) {
		printf("%d-D\n", score);
	} else {
		printf("%d-E\n", score);
	}

	return 0;
}
