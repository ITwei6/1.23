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
//	assert(dest && src);//�����ж�
//	char* start = dest;
//	//����Ҫ�ҵ�Ŀ�Ŀռ��'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//�ٽ��ַ���׷�ӵ�'\0'�ĺ��棬����'\0'
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return start;//��󷵻�Ŀ��ռ����ʼ��ַ
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
//	//�ȱȽϵ�һ���ַ��������ͬ�����һ������������ơ�
//	//ֱ����ͬλ���ַ���һ���Ƚ��ַ�ASCII��ֵ
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')//�����ѭ������str1��str2����һ������0���ʾ�����ַ�������ȵģ���Ϊ��str1==str2�������£��ֵ���0
//		{//�϶�����ȵ�
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
//	char arr1[] = "xiao tao lailo@qq.com";//Ҫ�ָ���ַ���C
//	char arr2[] = "@.";//�ָ���γɵļ��Ϸָ��@ �� �ָ�� .
//	char arr3[100] = { 0 };
//	strcpy(arr3, arr1);//��������ʱ����һ�ݣ�����arr1�е�����
//	//char*ret=strtok(arr3, arr2);//��һ��Ҫ��������Ҫ�ָ���ַ�����Ϊ����
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, arr2);//�ڶ��ξͲ���Ҫ�ַ����ˣ�ֻ��ҪNULL��Ϊ�����Ϳ���
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, arr2);//������Ҳ��һ��
//	//printf("%s\n", ret);
//	char* ret = NULL;
//	for (ret = strtok(arr3, arr2); ret != NULL; ret = strtok(NULL, arr2))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//#include <errno.h>//ʹ�øÿ⺯����Ҫ����ͷ�ļ�
//#include <string.h>
//int main()
//{
//	FILE* pFile = fopen("unexist.txt", "r");//��һ�������ڵ��ļ�
//	if (pFile == NULL)//��ʧ�ܻ���б���
//	{
//		perror("fopen");//���������ĸ����̻ᱨ���ؾ�д�ĸ����̡�
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