#include <stdio.h>
#include <unistd.h>
int main(int argc, const char *argv[])
{
	FILE *fd = fopen("a.txt", "a+");
	fprintf(fd, "a");

	printf("%d ", fd->_IO_buf_end - fd->_IO_buf_base);
	int i = 0;
	do {
		fprintf(fd, "a");
		i++;
	} while (i < 4098);

	printf("%d", fd->_IO_write_ptr - fd->_IO_write_base);
	sleep(5);
	return 0;
}
