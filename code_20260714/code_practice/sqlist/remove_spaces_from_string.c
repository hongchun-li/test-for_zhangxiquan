#include <stdio.h>

char * del_space(char *s);

int main() {
	char s[100] = "         asdf     dd   sd";

	printf("%s\n", del_space(s));

	return 0;
}

char * del_space(char *s) {
	char * p = s;
	char * q = s;

	while (*q != '\0') {
		if (*q != ' ') {
			*p = *q;
			p++;
			q++;
		} else {
			q++;
		}
	}
	*p = '\0';
	return s;
}
