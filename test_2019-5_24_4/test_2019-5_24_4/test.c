#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ�����Ϊ1��3��5������ֻ����1��3��5
	int*p;
	p = a[0];//��һ�е����������ŵ�һ�е�һ��Ԫ�صĵ�ַ
	printf("%d\n", p[0]);//����ĵ�һ��Ԫ�� 1
	system("pause");
	return 0;
}