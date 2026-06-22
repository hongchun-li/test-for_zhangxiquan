/*
 * 头文件中一般放的内容
 * 1、结构体、共用体、枚举的定义
 * 2、宏定义
 * 3、函数声明
 * 一般全局变量不会放这里
 */

#ifndef _FUN_H_
#define _FUN_H_

#include <stdio.h>
#include <string.h>

//角色的数据类型
enum
{
	merchant = 1,
	customer,
	//}role;
	};

//商家的数据类型
enum
{
	list = 1,
	modify,
	purchase,
	sales,
	quit,
};

//顾客的数据类型
enum
{
	//list,
	shopping_cart = 2,
	quit1,
};

//商品的数据类型
struct goods
{
	int num;
	char name[64];
	int quantity;
	float price;
};
/*
goods[64] = {\
	{1, "苹果", 10, 2.5},\
	{2, "香蕉", 20, 3.5},\
	{3, "橘子", 4, 5},\
};
//存储商品的数量，随时维护
int n = 3;  

//存储销售额
float Sales = 0;
*/
void menu_merchant();
void menu_customer();
void list_goods();
void modify_goods();
void purchase_goods();
void shopping_goods();

#endif
