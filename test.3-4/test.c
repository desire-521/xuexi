//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
// {
//    assert(dest && src);
//	char* ret = dest;
//    while (*dest++ = *src++)
//	{
//		;  
//	}
//	return ret;
// }
//int main()
//{
//	char arr1[20] = "##########";
//	char arr2[] = "hello bit!";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while(*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "bit!!";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

#include<stdio.h>
#include<assert.h>
char* my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while(*s1 == *s2)
	{
		if (*s1 == '\0')
			return 0;
		s1++;
		s2++;
	}
	if (*s1 > *s2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	int ret = my_strcmp("abq", "abcdef");
	printf("%d\n", ret);
	return 0;
}