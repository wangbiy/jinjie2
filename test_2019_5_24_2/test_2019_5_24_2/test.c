#include <stdio.h>
#include <stdlib.h>
struct Test
{
	int Num;
	char* pcNum;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//����p��ֵΪ0x100000
//�ṹ��Ĵ�СΪ20���ֽ�
int main()
{
	printf("%p\n", p + 0x1);//pΪ�ṹ�������+1Ϊ+20�����Ϊ16����0x100014
	printf("%p\n", (unsigned long)p + 0x1);//p��ǿ��ת��Ϊ�޷��ų����Σ�+1Ϊ+1�����Ϊ0x100001
	printf("%p\n", (unsigned int*)p + 0x1);//p��ǿ��ת��Ϊ�޷�������ָ�룬+1Ϊ+4�����Ϊ0x100004
	system("pause");
	return 0;
}