#define _CRT_SECURE_NOP_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4 指针变量大小
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));//1  p存'a'的地址，对p解引用，为'a'的大小
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4
	printf("%d\n", sizeof(&p + 1));//4char* p=&a,char* *q=&p; q+1跳过一个char*  ,&p+1 跳过一个char*
	printf("%d\n", sizeof(&p[0] + 1));//4 'b'的地址
	printf("***********************************\n");
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//error 首元素的地址解引用为首元素
	printf("%d\n", strlen(p[0]));//error
	printf("%d\n", strlen(&p));//随机值 整个数组的地址
	printf("%d\n", strlen(&p + 1));//随机值 跳过一个char*
	printf("%d\n", strlen(&p[0] + 1));//5
	system("pause");
	return 0;
}
