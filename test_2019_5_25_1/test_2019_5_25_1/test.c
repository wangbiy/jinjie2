#include <stdio.h>
#include <stdlib.h>
//�ڴ����
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
	printf("%d\n", sizeof(test));//112 ��������������Ϊ8
	system("pause");
	return 0;
}