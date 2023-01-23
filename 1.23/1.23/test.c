#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* start = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return start;
//}
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);//断言判断
//	char* start = dest;
//	//首先要找到目的空间的'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//再将字符串追加到'\0'的后面，包括'\0'
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return start;//最后返回目标空间的起始地址
//	
//}
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest)
//	{
//		dest++;
//	}
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	char* ret =my_strcat(arr1, arr2);
//	printf("%s",ret );
//	return 0;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//先比较第一个字符，如果相同则比下一个，后面的类似。
//	//直到相同位的字符不一样比较字符ASCII码值
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')//在这个循环里，如果str1和str2中有一个等于0则表示两个字符串是相等的，因为在str1==str2的条件下，又等于0
//		{//肯定是相等的
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//
//}
//int  main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abd";
//	int ret=my_strcmp(arr1, arr2);
//	if (ret==1)
//	{
//		printf("arr1>arr2");
//	}
//	else if (ret==-1)
//	{
//		printf("arr1<arr2");
//	}
//	else
//		printf("arr1=arr2");
//	return 0;
//}
//int main()
//{
//	char str[] = "This is a simple string";
//	char* ret;
//	ret = strstr(str, "simple");
//	printf("%s", ret);
//	return 0;
//}
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	if (*str2 == '\0')
//	{
//		return str1;
//	}
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cp = str1;
//	//
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcd";
//	char arr2[] = "bc";
//	char* ret = my_strstr(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char arr1[] = "xiao tao lailo@qq.com";//要分割的字符串C
//	char arr2[] = "@.";//分割符形成的集合分割符@ 和 分割符 .
//	char arr3[100] = { 0 };
//	strcpy(arr3, arr1);//将数据临时拷贝一份，处理arr1中的内容
//	//char*ret=strtok(arr3, arr2);//第一次要将完整的要分割的字符串作为参数
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, arr2);//第二次就不需要字符串了，只需要NULL作为参数就可以
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, arr2);//第三次也是一样
//	//printf("%s\n", ret);
//	char* ret = NULL;
//	for (ret = strtok(arr3, arr2); ret != NULL; ret = strtok(NULL, arr2))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//#include <errno.h>//使用该库函数需要引用头文件
//#include <string.h>
//int main()
//{
//	FILE* pFile = fopen("unexist.txt", "r");//打开一个不存在的文件
//	if (pFile == NULL)//打开失败会进行报错
//	{
//		perror("fopen");//参数是在哪个过程会报错呢就写哪个过程。
//	}
//	else
//		fclose(pFile);
//	return 0;
//}
//int tolower(int c);
//int toupper(int c);
#include <ctype.h>
int main()
{
	int i = 0;
	char arr[] = "Xiao Tao Lai Lo";
	char c;
	while (arr[i])
	{
		c = arr[i];
		if (isupper(c))
		{
			c = tolower(c);
		}
		putchar(c);
		i++;
	}
	return 0;
}