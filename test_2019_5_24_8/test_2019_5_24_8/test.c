#include <stdio.h>
#include <stdlib.h>
int main()
{
	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char** cp[] = { c + 3, c + 2, c + 1, c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *--*++cpp + 3);//��һ��++cpp�����������,���ΪER
	printf("%s\n", *cpp[-2] + 3);//��һ��++cpp�����������,���ΪST
	printf("%s\n", cpp[-1][-1] + 1);//��һ��++cpp�����������,���ΪEW
	system("pause");
	return 0;
}