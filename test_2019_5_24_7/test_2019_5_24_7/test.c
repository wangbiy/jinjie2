#include <stdio.h>
#include <stdlib.h>
int main()
{
	char* a[] = { "work", "at", "alibaba" };
	char** pa = a;//char**       a
	              //|_____|----  char*--"work"(首字母的地址)
	              // pa          char*--"at"(首字母的地址)
	              //             char*--"alibaba"(首字母的地址)
	pa++;//跳过一个char*指向第二个char*
	printf("%s\n", *pa);//结果为at
	system("pause");
	return 0;
}