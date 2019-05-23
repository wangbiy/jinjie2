//求数组的第二大值
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int find_second(int* arr, int sz)
{
	int max = arr[0];
	int second = arr[1];
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i]>max)
		{
			second = max;
			max = arr[i];
		}
		else if (arr[i]<max && arr[i]>second)
		{
			second = arr[i];
		}
	}
	return second;
}
int main()
{
	int arr[] = { 1, 24, 36, 7, 19, 0, 27, 89, 99 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret=find_second(arr, sz);
	printf("数组的第二大值为:%d\n", ret);
	system("pause");
	return 0;
}