#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//Ä£ÄâÊµÏÖstrncmp
int my_strncmp(const char* dest,  const char* src,size_t count)
{
	assert(dest != NULL);
	assert(src != NULL);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		if (*dest == *src)
		{
			dest++;
			src++;
		}
		else
			return *dest - *src;
	}
	return 0;
}
int main()
{
	char *s1 = "abcdefg";
	char *s2 = "abc";
	int ret=my_strncmp(s1, s2, 4);
	printf("ret=%d\n", ret);
	system("pause");
	return 0;
}