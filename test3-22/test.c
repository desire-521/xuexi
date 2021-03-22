//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#include<assert.h>
//enum State
//{
//	VALID,
//	INVALID
//};
//enum State state = INVALID;
//int my_atoi(char *str)
//{
//	int flag = 1;
//	long long ret = 0;
//	assert(str);
//	state = INVALID;
//	while (isspace(*str))
//	{
//		str++;
//	}
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	if (*str == '++')
//	{
//		str++;
//	}
//	else if (str == '-')
//	{
//		flag=-1;
//		str++;
//	}
//	while (isdigit(*str))
//	{
//		ret = ret * 10 + flag * (*str - '0');
//		if ((ret > INT_MAX) || (ret < INT_MIN))
//		{
//			return 0;
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		state = VALID;
//		return (int)ret;
//	}
//	else
//	{
//		return (int)ret;
//	}
//}
//int main()
//{
//	char* p = "-1212212121212";
//	printf("%d\n", my_atoi(p));
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//char* mystrncat(char* dest, const char* src, int len)
//{
//	assert(NULL != dest && NULL != src);
//	char* cat = dest;
//	int i = 0;
//	while (*dest)
//	{
//		dest++;
//	}
//	for (; i < len; i++)
//	{
//		*dest++ = *src++;
//	}
//	return cat;
//}
//int main()
//{
//	char arr1[10] = { 'a', 'b', 'c', '\0' };
//	char arr2[20] = "world and bit";
//	int n = 5;
//	char* ret = mystrncat(arr1,arr2, n);
//	printf(" %s\n", ret);
//	return 0;
//}

//#include<stdio.h>
//char* my_strncpy(char* dest, const char* src, int con)
//{
//	char* ret = dest;
//	while (con && (*dest++ = *src ++))
//	{
//		con--;
//	}
//	if (con)
//	{
//		while (con--)
//		{ 
//			*dest = "\0";
//		}
//	 }
//	return ret;
//}
//int main()
//{
//	char arr[20] = "abcdefg";
//	printf("%s\n", my_strncpy(arr,"hello",5));
//	return 0;
//}

#include<stdio.h>
void find(int arr[], int size, int* n1, int* n2)
{
	int i = 0;
	int res = 0;
	int dif = 0;
	for (i = 0;i < size;i++)
	{
		res ^= arr[i];
	}
	for (i = 0;i < 32;i++)
	{
		if (res >> i)
		{
			dif = i;
			break;
		}
	}
	for (i = 0;i < size;i++)
	{
		if ((arr[i] >> dif) & 1)
		{
			*n1 ^= arr[i];
		}
		else
		{
			*n2 ^= arr[i];
		}
	}
}
int main()
{
	int ch1 = 0;
	int ch2 = 0;
	int arr[] = { 1,2,3,4,1,2,3,4,5,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	find(arr, size, &ch1, &ch2);
	printf("%d %d\n", ch1, ch2);
	return 0;
}