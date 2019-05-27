#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//Ä£ÄâÊµÏÖstrstr
char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = str1;
	const char* s2 = str2;
	const char* cur = str1;
	while (*cur)
	{
		s1 = cur;
		s2 = str2;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (char*)cur;
		cur++;
	}
	return NULL;
}
int main()
{
	char arr[] = "abcdefabcdef";
	char* ret=my_strstr(arr, "def");
	if (ret != NULL)
		printf("%s\n", ret);
	else
		printf("ÕÒ²»µ½!\n");
	system("pause");
	return 0;
}
