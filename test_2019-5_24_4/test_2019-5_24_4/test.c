#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式，结果为1，3，5，数组只放了1，3，5
	int*p;
	p = a[0];//第一行的数组名，放第一行第一个元素的地址
	printf("%d\n", p[0]);//数组的第一个元素 1
	system("pause");
	return 0;
}