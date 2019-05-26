#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//模拟实现strncat
char* my_strncat(char* dest, const char* src,size_t count)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (count--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return ret;
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