#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//strcat的模拟实现（字符串的追加）
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "hello ";
	char arr2[] = "bit";
	printf("%s\n", my_strcat(arr1, arr2));
	//printf("%s\n", strcat(arr1, arr1));//死循环，自己给自己增加,会覆盖‘\0’
	system("pause");
	return 0;
}