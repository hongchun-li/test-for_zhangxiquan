#include "fun.h"

int main(int argc, const char *argv[])
{
	printf("+++++++++++++\n");
	int role;
	while(1)
	{
		printf("|***************************|\n");
		printf("|*     1.商家    2.顾客    *|\n");
		printf("|***************************|\n");
		//scanf("%d", &role);
		scanf("%d", &role);
		if (role == merchant)
		{
			//printf("it is merchant\n");
			menu_merchant();
		}
		else if (role == customer)
		{
			//printf("it is customer\n");
			menu_customer();
		}
		else
		{
			printf("your input error\n");
		}
	}

	return 0;
}

