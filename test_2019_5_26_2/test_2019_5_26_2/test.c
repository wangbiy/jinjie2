#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strncpy��ģ��ʵ��
char* my_strncpy(char*dest, const char*src, size_t count)
{
	char* ret = dest;
	while (count--)
	{
		if (src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
		{
			*dest = '\0';
			return ret;
		}
	}
	return ret;
}
int main()
{
	//char arr[] = "aaaaaaaaaaaa";
	//strncpy(arr, "bit", 5);//������Ҫ���������ݵĳ���ʱ���Զ�������Զ���ʣ�µ�0��С��Ҫ���������ݵĳ���ʱ������0�����Ϊbit
	char arr[] = "aaaaaaaaaaaa";
	my_strncpy(arr, "bit", 3);//biaaaaaaaaaa
	//my_strncpy(arr, "bit", 5);//bit
	printf("%s\n", arr);
	system("pause");
	return 0;
}