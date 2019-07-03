#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//6 整个数组
	printf("%d\n", sizeof(arr+0));//4 首元素地址
	printf("%d\n", sizeof(*arr));//1 首元素（通过arr访问首元素地址，解引用）
	printf("%d\n", sizeof(arr[1]));//1 首元素
	printf("%d\n", sizeof(&arr));//4 整个数组地址
	printf("%d\n", sizeof(&arr+1));//4 跳过一个数组到最后一个元素的后面 
	printf("%d\n", sizeof(&arr[0]+1));// 4 第二个元素地址


	printf("%d\n", strlen(arr));//随机数 strlen找'\0'
	printf("%d\n", strlen(arr+0));//随机数 
	printf("%d\n", strlen(*arr));//error 给strlen传的参数实际为地址，arr为首元素’a',地址为97的地址，解引用发生错误
	printf("%d\n", strlen(arr[1]));//error 98的地址
	printf("%d\n", strlen(&arr));//随机值（数组的地址）x=&arr
	printf("%d\n", strlen(&arr+1));//x-6 随机值  
	printf("%d\n", strlen(&arr[0]+1));//x-1 随机值
	system("pause");
	return 0;
}
