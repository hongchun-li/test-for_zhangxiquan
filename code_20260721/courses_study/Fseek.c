#include <stdio.h>

int main(int argc, const char *argv[])
{
	FILE *fp = NULL;
	long ret = 0;
	char buf[32] = {0};

	if ((fp = fopen(argv[1], "w+")) == NULL) {
		perror("fopen");
		return -1;
	}
	ret = ftell(fp);
	printf("ret = %ld\n", ret);

	fwrite("helloworld", sizeof(char), 10, fp);

	ret = ftell(fp);
	printf("ret = %ld\n", ret);

	//回到文件的开始位置
	//fseek(sp, 0, SEEK_SET);
	
	//往回8个字符
	fseek(fp, -8, SEEK_CUR);

	ret = ftell(fp);
	printf("ret = %ld\n", ret);

	fread(buf, sizeof(char), 5, fp);

	ret = ftell(fp);
	printf("ret = %ld\n", ret);

	fclose(fp);
	return 0;
}
