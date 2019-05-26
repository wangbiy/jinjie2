#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//strcmp的模拟实现
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 != NULL);
	assert(s2 != NULL);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return 0;
		s1++;
		s2++;
	}
	//if (*s1 > *s2)
	//	return 1;
	//else
	//	return -1;//在vs环境下结果为-1,1，0
	return *s1 - *s2;//在任何环境下显示不止-1或1
}
int main()
{
	char* s1 = "abc";
	char* s2 = "abcd";
	int ret = my_strcmp(s1, s2);
	printf("ret=%d\n", ret);
	system("pause");
	return 0;
}