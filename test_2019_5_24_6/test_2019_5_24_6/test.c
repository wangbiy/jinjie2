#include <stdio.h>
#include <stdlib.h>
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* ptr1 = (int*)(&aa + 1);//&aa+1Ϊ������������10����ĵ�ַ��Ϊptr1
	int* ptr2 = (int*)(*(aa + 1));//aa+1Ϊ�ڶ��еĵ�ַ��������û���ã�Ϊptr2
	printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));//*(ptr1-1)Ϊ10��*(ptr2-1)Ϊ5
	system("pause");
	return 0;
}