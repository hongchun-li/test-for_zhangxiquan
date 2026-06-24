#include <stdio.h>
#include <string.h>

struct book
{
	int num;
	char name[16];
	char author[16];
	char press[32];
	float price;
};
int main(int argc, const char *argv[])
{
	int i;
	struct book Book[3] = {{1, "C语言", "张三", "邮电出版社", 45},\
		{2, "c和指针", "李四", "邮电出版社", 34},\
		{3, "c陷阱", "王五", "农业出版社", 67}};

	struct book Book2[5];
	Book2[0].num = 4;
	strcpy(Book2[0].name, "系统编程");
	strcpy(Book2[0].author, "周三");
	strcpy(Book2[0].press, "农业出版社");
	Book2[0].price = 45;
	for (i = 0; i < 3; i++)
	{
		printf("num = %d, name = %s, author = %s, press = %s, price = %f\n",\
				Book[i].num, Book[i].name, Book[i].author, Book[i].press, Book[i].price);
	}
	printf("num = %d, name = %s, author = %s, press = %s, price = %f\n",\
			Book2[0].num, Book2[0].name, Book2[0].author, Book2[0].press, Book2[0].price);
	return 0;
}
