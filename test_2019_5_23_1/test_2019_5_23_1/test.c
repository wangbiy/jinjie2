//回调函数的用法
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int int_cmp(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
int main()
{
	int arr[] = { 12345, 300, 5, 75678, 9, 2, 4, 6, 10, 0, 1, 8,11111 };
	int i = 0;
	printf("排序前:");
	printf("\n");
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	printf("排序后:");
	printf("\n");
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}