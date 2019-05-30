#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//模拟实现strncat
char* my_strncat(char* dest, const char* src,size_t count)
{
	char *pdest = dest;
	const char *psrc = src;
	assert(dest);
	assert(src);
	while (*pdest)
	{
		pdest++;
	}
	while (count--)
	{
		*pdest++ = *psrc++;
	}
	*pdest = '\0';
	return dest;
}
int main()
{
	char arr[20] = "abc";
	char brr[] = "pud";
	my_strncat(arr, brr, 9);//后面自动补一个'\0'
	printf("%s\n",arr);
	system("pause");
	return 0;
}
