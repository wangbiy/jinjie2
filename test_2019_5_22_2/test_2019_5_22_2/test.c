#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//整个数组的大小 16
	printf("%d\n", sizeof(a+0));//首元素的地址 4
	printf("%d\n", sizeof(*a));//首元素 4（a为首元素地址，*a为首元素）
	printf("%d\n", sizeof(a+1));//4第二个元素的地址
	printf("%d\n", sizeof(a[1]));//4 第二个元素
	printf("%d\n", sizeof(&a));// 4 整个数组的地址
	printf("%d\n", sizeof(*&a));//16 整个数组的大小
	printf("%d\n", sizeof(&a+1));//4 跳出整个数组指向4的后面
	printf("%d\n", sizeof(&a[0]));//4 首元素地址
	printf("%d\n", sizeof(&a[0]+1));//4 第二个元素地址

	system("pause");
	return 0;
}