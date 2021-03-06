//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int x = a > b ? a : b;
//	while ((x % a != 0) || (x % b != 0))
//	{
//		x++;
//	}
//	printf("%d", x);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int x = 1;
//	while (a * x % b != 0)
//	{
//		x++;
//	}
//	printf("%d", a*x);
//	return 0;
//}

#include<stdio.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	char* end = arr;
	while (*start != '\0')
	{
		end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
		    start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);
	return 0;
}