#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//��������Ĵ�С 16
	printf("%d\n", sizeof(a+0));//��Ԫ�صĵ�ַ 4
	printf("%d\n", sizeof(*a));//��Ԫ�� 4��aΪ��Ԫ�ص�ַ��*aΪ��Ԫ�أ�
	printf("%d\n", sizeof(a+1));//4�ڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(a[1]));//4 �ڶ���Ԫ��
	printf("%d\n", sizeof(&a));// 4 ��������ĵ�ַ
	printf("%d\n", sizeof(*&a));//16 ��������Ĵ�С
	printf("%d\n", sizeof(&a+1));//4 ������������ָ��4�ĺ���
	printf("%d\n", sizeof(&a[0]));//4 ��Ԫ�ص�ַ
	printf("%d\n", sizeof(&a[0]+1));//4 �ڶ���Ԫ�ص�ַ

	system("pause");
	return 0;
}