#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char arr[] = "abcdef";//末尾有'\0'
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr+0));//4 首元素地址
	printf("%d\n", sizeof(*arr));//1 首元素大小
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4 整个数组的地址
	printf("%d\n", sizeof(*&arr));//7
	printf("%d\n", sizeof(&arr+1));//4 跳过一个数组到0的后面
	printf("%d\n", sizeof(&arr[0]+1));//4 第二个元素的地址
	printf("***************************\n");
	printf("%d\n", strlen(arr));//6 首元素的地址，从首元素算起
	printf("%d\n", strlen(arr+0));//6
	printf("%d\n", strlen(*arr));//error 首元素的ascii码值为97,97的地址不能解引用
	printf("%d\n", strlen(arr[1]));//error 第二个元素ascii码值为98
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr+1));//随机值
	printf("%d\n", strlen(&arr[0]+1));//5 第二个元素的地址
	system("pause");

	return 0;
}