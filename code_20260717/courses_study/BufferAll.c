#include <stdio.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
	FILE* fp = fopen("a.txt", "a+");

	//fprintf(fp, "a");

	printf("%lu ", fp->_IO_buf_end - fp->_IO_buf_base);

	int i = 0;

	do {
		fprintf(fp, "a");
		i++;
	} while (i < 4098);

	printf("%lu ", fp->_IO_write_ptr - fp->_IO_write_base);

	sleep(5);
	
	return 0;
}
