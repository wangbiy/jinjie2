#include <stdio.h>
#include <stdlib.h>
//内存对齐
typedef struct test
{
	short a;
	struct 
	{
		int b;
		double c[10];
		char d;
	};
	long e;
}test;
int main()
{
	printf("%d\n", sizeof(test));//112 在其他编译器下为8
	system("pause");
	return 0;
}