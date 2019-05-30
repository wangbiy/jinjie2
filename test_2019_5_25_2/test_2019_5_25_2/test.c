#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//strcpyµÄÄ£ÄâÊµÏÖ
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char *pdest = dest;
	const char *psrc = src;
	while (*pdest++ = *psrc++)
	{
		;
	}
	return dest;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = { 'b', 'i', 't','\0' };
	printf("%s\n", my_strcpy(arr1, arr2));
	system("pause");
	return 0;
}
