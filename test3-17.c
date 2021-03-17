//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#define CHANGE(n) (((n) & (0x55555555) << 1) | ((n) & (0xaaaaaaaa) >> 1))
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", CHANGE(n));
//	return 0;
//}

#define offsetof(type,member)((size_t)&(((type*)0)->member))