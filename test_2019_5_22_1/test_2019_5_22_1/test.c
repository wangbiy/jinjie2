#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[10];
	int(*p)[10] = &arr;
	printf("%p\n", p);
	printf("%p\n", p + 1);//����ָ���1�Ǽ�һ������
	system("pause");
	return 0;
}