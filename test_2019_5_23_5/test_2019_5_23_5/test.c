#define _CRT_SECURE_NOP_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4 ָ�������С
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));//1  p��'a'�ĵ�ַ����p�����ã�Ϊ'a'�Ĵ�С
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4
	printf("%d\n", sizeof(&p + 1));//4char* p=&a,char* *q=&p; q+1����һ��char*  ,&p+1 ����һ��char*
	printf("%d\n", sizeof(&p[0] + 1));//4 'b'�ĵ�ַ
	printf("****************\n");
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//error ��Ԫ�صĵ�ַ������Ϊ��Ԫ��
	printf("%d\n", strlen(p[0]));//error
	printf("%d\n", strlen(&p));//���ֵ ��������ĵ�ַ
	printf("%d\n", strlen(&p + 1));//���ֵ ����һ��char*
	printf("%d\n", strlen(&p[0] + 1));//5

	system("pause");
	return 0;
}