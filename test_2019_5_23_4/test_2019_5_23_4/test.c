#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char arr[] = "abcdef";//ĩβ��'\0'
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr+0));//4 ��Ԫ�ص�ַ
	printf("%d\n", sizeof(*arr));//1 ��Ԫ�ش�С
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4 ��������ĵ�ַ
	printf("%d\n", sizeof(*&arr));//7
	printf("%d\n", sizeof(&arr+1));//4 ����һ�����鵽0�ĺ���
	printf("%d\n", sizeof(&arr[0]+1));//4 �ڶ���Ԫ�صĵ�ַ
	printf("***************************\n");
	printf("%d\n", strlen(arr));//6 ��Ԫ�صĵ�ַ������Ԫ������
	printf("%d\n", strlen(arr+0));//6
	printf("%d\n", strlen(*arr));//error ��Ԫ�ص�ascii��ֵΪ97,97�ĵ�ַ���ܽ�����
	printf("%d\n", strlen(arr[1]));//error �ڶ���Ԫ��ascii��ֵΪ98
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr+1));//���ֵ
	printf("%d\n", strlen(&arr[0]+1));//5 �ڶ���Ԫ�صĵ�ַ
	system("pause");

	return 0;
}