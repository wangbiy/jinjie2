#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ģ��ʵ��strchr
char* my_strchr(const char*arr, char key)
{
	while (*arr != '\0'&&*arr != key)
	{
		arr++;
	}
	if (*arr == key)
		return arr;
	return NULL;
}
int main()
{
	char arr[] = "abcdefabcdef";
	char* ret=my_strchr(arr, 'b');
	if (ret != NULL)
	{
		printf("%s\n", ret);
	}
	else
		printf("�Ҳ���!\n");
	system("pause");
	return 0;
}