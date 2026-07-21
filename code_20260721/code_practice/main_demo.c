#include <stdio.h>

int main(int argc, const char * argv[]) {
	if (argc != 3) {
		printf("usage:%s ip port\n", argv[0]);
		return 0;
	}

	int i;
	printf("argc=%d\n", argc);
	for (i = 0; i < argc; i++) {
		//*argv[i] = 'A';
		printf("%s\n", argv[i]);
	}
	return 0;
}
