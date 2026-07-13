#include <stdio.h>

int main(int argc, const char *argv[])
{
	char s[100] = {"How are you!"};
	char *p;
	p = s;

	while (*p != '\0') {
		if (*p >= 'a' && *p <= 'z') {
			*p -= 32;
		}
		p++;
	}
	printf("%s\n", s);
	return 0;
}
