#include <stdio.h>
#include <stdlib.h>
int main()
{
	char* a[] = { "work", "at", "alibaba" };
	char** pa = a;//char**       a
	              //|_____|----  char*--"work"(����ĸ�ĵ�ַ)
	              // pa          char*--"at"(����ĸ�ĵ�ַ)
	              //             char*--"alibaba"(����ĸ�ĵ�ַ)
	pa++;//����һ��char*ָ��ڶ���char*
	printf("%s\n", *pa);//���Ϊat
	system("pause");
	return 0;
}