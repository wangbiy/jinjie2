#include <stdio.h>
#include <stdlib.h>
int main()
{
	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char** cp[] = { c + 3, c + 2, c + 1, c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *--*++cpp + 3);//上一个++cpp会产生副作用,结果为ER
	printf("%s\n", *cpp[-2] + 3);//上一个++cpp会产生副作用,结果为ST
	printf("%s\n", cpp[-1][-1] + 1);//上一个++cpp会产生副作用,结果为EW
	system("pause");
	return 0;
}