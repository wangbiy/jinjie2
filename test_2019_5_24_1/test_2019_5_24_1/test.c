#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* ptr = (int*)(&a + 1);//&a+1��ʾ����һ������ĵ�ַ������5�ĺ���
	printf("%d %d\n", *(a + 1), *(ptr - 1));//ptr��&a+1,��ǰŲ��һ��λ��Ϊ5�ĵ�ַ��������Ϊ5
	//���Ϊ2��5
	system("pause");
	return 0;
}