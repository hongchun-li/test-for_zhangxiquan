#include <stdio.h>

int fac(int n);
int main(int argc, const char *argv[])
{
	int n;
	int ret;

	scanf("%d", &n);
	ret = fac(n);
	printf("%d!=%d\n", n, ret);
	return 0;
}

int fac(int n) {
	if (n == 1) {
		return 1;
	}
	return n * fac(n-1);
}
