#include <stdio.h>
#include <stdlib.h>
int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* ptr1 = (int*)(&aa + 1);//&aa+1为跳过整个数组10后面的地址，为ptr1
	int* ptr2 = (int*)(*(aa + 1));//aa+1为第二行的地址，解引用没有用，为ptr2
	printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));//*(ptr1-1)为10，*(ptr2-1)为5
	system("pause");
	return 0;
}