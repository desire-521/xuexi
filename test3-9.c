//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* src)
//{
//	int num = 0;
//	assert(src != NULL);
//	while (*src)
//	{
//		num++;
//		src++;
//	}
//	return num;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "hello world !!!";
//	char arr2[] = "hello bit bit";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

#include <stdio.h>
int sort(int* str, int sz) {
	int temp = 0;
	int* start = str;
	int* end = str + sz - 1;
	while (start < end) {
		if ((*start) % 2 == 1) {
			start++;
		}
		else if ((*end) % 2 == 0) 
		{
			end--;
		}
		else {
			temp = *start;
			*start = *end;
			*end = temp;
		}
	}
	return 0;
}
int Print(int* str, int sz) {
	for (int i = 0; i < sz; i++) {
		printf("%d ", str[i]);
	}
	return 0;
}
int main() {
	int str[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(str) / sizeof(str[0]);
	sort(str, sz);
	Print(str, sz);
	return 0;
}