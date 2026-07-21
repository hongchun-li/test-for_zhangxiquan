#include <stdio.h>

int main() {
	const int m = 10;//int const m = 10;
	int * p = &m;
    //	error:	m++;
	
	(*p)++;
	printf("%d\n", m);
	return 0;
}
