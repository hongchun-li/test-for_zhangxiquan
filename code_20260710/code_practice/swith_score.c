#include <stdio.h>

int main(int argc, const char *argv[])
{
	char grade_rating;
	printf("input grade_rating:");
	scanf("%c", &grade_rating);

	switch(grade_rating) {
	case 'A':
		printf("A-excellenr\n");
		break;

	case 'B':
		printf("B-very good\n");
		break;
	case 'C':
		printf("C-nice\n");
		break;
	case 'D':
		printf("D-ok\n");
		break;
	case 'E':
		printf("E-commom\n");
	default:
		printf("input invalid\n");
		break;
	}

	printf("**************\n");


	return 0;
}
