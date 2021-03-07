#include<stdio.h>
//struct Book
//{
//	char name[20];
//	char author[20];
//	short price;
//}b1,b2,b3;
//int main()
//{
//	struct Book b1 = { "计算机","韩聪",45 };
//	printf("%s %s %d\n", b1.name, b1.author, b1.price);
//	return 0;
//}

//struct 
//{
//	char c;
//	int b;
//	short d;
//}s;
//
//struct
//{
//	char c;
//	int b;
//	short d;
//}*p;
//int main()
//{
//	p = &s;
//	return 0;
//}

//err
//struct Node
//{
//	int data;
//	struct Node n;
//};

//struct Node
//{
//	int data;//数据域
//	struct Nade* next;//指针域
//};
//typedef struct 
//{
//	int data;//数据域
//	struct Nade* next;//指针域
//};
typedef struct Node
{
	int data;//数据域
	struct Nade* next;//指针域
}Node;
int main()
{

	return 0;
}