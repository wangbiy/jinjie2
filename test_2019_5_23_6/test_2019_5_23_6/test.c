#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48 ��������Ĵ�С
	printf("%d\n", sizeof(a[0][0]));//4 ��Ԫ�صĴ�С
	printf("%d\n", sizeof(a[0]));//16 a[0]��ʾ��һ���������������һ�еĴ�С
	printf("%d\n", sizeof(a[0]+1));//4 a[0]Ϊ��Ԫ�ص�ַ����ʾ��һ�е�һ��Ԫ�ص�ַ��+1Ϊ��һ�еڶ���Ԫ�ص�ַ
	printf("%d\n", sizeof(*(a[0]+1)));//4
	printf("%d\n", sizeof(a+1));// 4 aΪ��һ�е�ַ��+1Ϊ�ڶ��е�ַ
	printf("%d\n", sizeof(*(a+1)));//16 �ڶ��еĴ�С
	printf("%d\n", sizeof(&a[0]+1));//4 �ڶ��е�ַ
	printf("%d\n", sizeof(*(&a[0]+1)));//16 �ڶ��д�С
	printf("%d\n", sizeof(*a));//16 ��һ�д�С
	printf("%d\n", sizeof(a[3]));// 16 ĳһ�е���������ĳһ�еĴ�С

	system("pause");
	return 0;
}
