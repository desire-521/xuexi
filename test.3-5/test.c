//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	const char* cp = s1;
//	while (*cp)
//	{
//		char* p1 = cp;
//		char* p2 = s2;
//		while (p1 && *p2 && (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbcdefghijk";
//	char arr2[] = "bcd";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//	{
//		printf("%s\n", ret);
//	}
//	else
//	{
//		printf("ÕÒ²»µ½");
//	}
//	return 0;
//}

#include<stdio.h>
int my_strlen(const char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[20] = "abcdefg";
	char ret = my_strlen(arr);
	printf("%d", ret);
	return 0;
}