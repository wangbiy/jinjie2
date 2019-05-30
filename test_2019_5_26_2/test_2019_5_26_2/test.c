#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strncpy的模拟实现
char* my_strncpy(char* dest, const char* src, size_t count)
{
	char *pdest = dest;
	const char *psrc = src;
	assert(dest);
	assert(src);
	while (count--)
	{
		if (psrc != '\0')
		{
			*pdest = *psrc;
			pdest++;
			psrc++;
		}
		else
		{
			*pdest = '\0';
			return dest;
		}	
	}
	return dest;	
}
int main()
{
	//char arr[] = "aaaaaaaaaaaa";
	//strncpy(arr, "bit", 5);//当超过要拷贝的内容的长度时，自动向后面自动补剩下的0，小于要拷贝的内容的长度时，不补0，结果为bitaaaaaaaaa
	char arr[] = "aaaaaaaaaaaa";
	my_strncpy(arr, "bit", 3);//bitaaaaaaaaa
	//my_strncpy(arr, "bit", 5);//bit
	printf("%s\n", arr);
	system("pause");
	return 0;
}
