#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);//&a+1表示跳过一个数组到4的后面的地址，ptr1存这个地址
	int* ptr2 = (int*)((int)a + 1);//数组在计算机中是以小端放的，即a[4]为
	                               //01 00 00 00|02 00 00 00 |03 00 00 00|04 00 00 00
	                               //a为首元素地址，强制类型转换为整形，+1到01后面的00的地址，即为ptr2
	printf("%x %x\n", ptr1[-1], *ptr2);//ptr1[-1]为*(ptr1-1),结果为4，*ptr2输出整形为00 00 00 02，以小端输出为02 00 00 00，即为2 00 00 00
	system("pause");
	return 0;
}