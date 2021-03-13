#include<stdio.h>

int main()
{
	char password[20] = { 0 };
	int i;
	for(i = 0;i < 3;i++)
	{
		printf("ÇëÊäÈëÃÜÂë:");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("µÇÂ½³É¹¦");
			break;
		}
		else
		{
			printf("ÃÜÂëÕýÈ·");
		}
	}
    if (i = 3)
	{
	     break;
	}
}



