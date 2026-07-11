#include <stdio.h>

#define _DEBUG_ 2
//#define _PRITNT_


int main(int argc, const char *argv[])
{
//#ifdef _PRITNT_
//#if 1
//#if 0 
//#if _DEBUG_ == 1 
//#if _DEBUG_ == 2
//#ifndef _PRITNT_ 
//#if 1
//#if 0
//#ifndef _DEBUG_ = 1
//#ifndef _DEBUG_== 0
//#ifndef _DEBUG_=1 
#ifndef _PRITNT_
	printf("hello world\n");
//#endif
#else
	printf("hello China\n");
#endif
	return 0;
}
