#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int *arr, int sz)
{
	int i = 0;
	//趟数
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		//比较
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void swap(int* a, int* b)
{
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}
void reverse_arr(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz / 2; i++)
	{
		swap(&arr[i], &arr[sz - 1 - i]);
	}
}
int main()
{
	int arr[] = { 0, 89, 9, 7, 10, 26, 45 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	printf("逆置前的数组为:");
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	reverse_arr(arr, sz);
	printf("逆置后的数组为:");
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("**********************\n");
	printf("排序前的数组为:");
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	bubble_sort(arr, sz);
	printf("排序后的数组为:");
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}