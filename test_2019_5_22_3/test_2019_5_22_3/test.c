#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//6 ��������
	printf("%d\n", sizeof(arr+0));//4 ��Ԫ�ص�ַ
	printf("%d\n", sizeof(*arr));//1 ��Ԫ�أ�ͨ��arr������Ԫ�ص�ַ�������ã�
	printf("%d\n", sizeof(arr[1]));//1 ��Ԫ��
	printf("%d\n", sizeof(&arr));//4 ���������ַ
	printf("%d\n", sizeof(&arr+1));//4 ����һ�����鵽4�ĺ��� 
	printf("%d\n", sizeof(&arr[0]+1));// 4 �ڶ���Ԫ�ص�ַ


	printf("%d\n", strlen(arr));//����� strlen��'\0'
	printf("%d\n", strlen(arr+0));//����� 
	printf("%d\n", strlen(*arr));//error ��strlen���Ĳ���ʵ��Ϊ��ַ��arrΪ��Ԫ�ء�a',��ַΪ97�ĵ�ַ�������÷�������
	printf("%d\n", strlen(arr[1]));//error 98�ĵ�ַ
	printf("%d\n", strlen(&arr));//���ֵ������ĵ�ַ��x=&arr
	printf("%d\n", strlen(&arr+1));//x-6 ���ֵ  
	printf("%d\n", strlen(&arr[0]+1));//x-1 ���ֵ
	system("pause");
	return 0;
}