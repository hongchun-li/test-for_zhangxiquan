#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = { "eeeabcaaa" };
	char str2[] = { "abc" };
	char* ret = strstr(str1, str2);
	if (ret != NULL) {
		printf("%s", ret);
	} else {
		printf("没找到!");
	}
	putchar('\n');
	return 0;
}
