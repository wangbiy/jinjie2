#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48 整个数组的大小
	printf("%d\n", sizeof(a[0][0]));//4 首元素的大小
	printf("%d\n", sizeof(a[0]));//16 a[0]表示第一行数组名，计算第一行的大小
	printf("%d\n", sizeof(a[0]+1));//4 a[0]为首元素地址，表示第一行第一个元素地址，+1为第一行第二个元素地址
	printf("%d\n", sizeof(*(a[0]+1)));//4
	printf("%d\n", sizeof(a+1));// 4 a为第一行地址，+1为第二行地址
	printf("%d\n", sizeof(*(a+1)));//16 第二行的大小
	printf("%d\n", sizeof(&a[0]+1));//4 第二行地址
	printf("%d\n", sizeof(*(&a[0]+1)));//16 第二行大小
	printf("%d\n", sizeof(*a));//16 第一行大小
	printf("%d\n", sizeof(a[3]));// 16 某一行的数组名，某一行的大小

	system("pause");
	return 0;
}
