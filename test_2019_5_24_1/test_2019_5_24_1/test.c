#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* ptr = (int*)(&a + 1);//&a+1表示跳过一个数组的地址，跳到5的后面
	printf("%d %d\n", *(a + 1), *(ptr - 1));//ptr存&a+1,向前挪动一个位置为5的地址，解引用为5
	//结果为2，5
	system("pause");
	return 0;
}