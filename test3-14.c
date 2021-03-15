#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct stu s = { "zhangsan",20,66.5f };
//	char buf[200] = { 0 };
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//	printf("%s\n", buf);
//	return 1;
//	struct stu tmp = { 0 };
//	sscanf(buf, "%s %d %f", tmp.name, tmp.age, tmp.score);
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//        getchar();
//        if (ch >= 'A' && ch <= 'Z')
//            printf("%c\n", tolower(ch));
//        else
//            printf("%c\n", toupper(ch));
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && a == c && b == c)
//				printf("Equilateral triangle!\n");
//			else if (a == b || a == c || b == c)
//				printf("Isosceles triangle!\n");
//			else
//				printf("Ordinary triangle!\n");
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int year = 0, month = 0;
	int a[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int b[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d %d", &year, &month) != EOF)
	{
		if (year % 4 == 0 || (year % 4 == 0 && year % 100 != 0))
		{
			printf("%d\n", b[month - 1]);
		}
		else
		{
			printf("%d\n", a[month - 1]);
		}
	}
	return 0;
}