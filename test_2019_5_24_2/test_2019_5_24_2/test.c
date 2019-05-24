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
//假设p的值为0x100000
//结构体的大小为20个字节
int main()
{
	printf("%p\n", p + 0x1);//p为结构体变量，+1为+20，结果为16进制0x100014
	printf("%p\n", (unsigned long)p + 0x1);//p被强制转换为无符号长整形，+1为+1，结果为0x100001
	printf("%p\n", (unsigned int*)p + 0x1);//p被强制转换为无符号整形指针，+1为+4，结果为0x100004
	system("pause");
	return 0;
}