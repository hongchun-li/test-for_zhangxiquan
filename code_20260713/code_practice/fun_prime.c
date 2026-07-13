#include <stdio.h>

int fun_prime(int n);
int fun_prime_sta(int n);

int main(int argc, const char *argv[])
{
	int n;
	int count;

	printf("input n:");
	scanf("%d", &n);

	count = fun_prime_sta(n);
	printf("count=%d\n", count);
	return 0;
}

int fun_prime(int n) {
	int i;
	if (n == 1) {
		return 0;
	}

	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int fun_prime_sta(int n) {
	int i;
	int sum = 0;
	for (i = 1; i < n; i++) {
		if (fun_prime(i)) {
			printf("%d\n", i);
			sum++;
		}
	}
	return sum;
}

