#include<stdio.h>

int main()
{
	char password[20] = { 0 };
	int i;
	for(i = 0;i < 3;i++)
	{
		printf("����������:");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ�");
			break;
		}
		else
		{
			printf("������ȷ");
		}
	}
    if (i = 3)
	{
	     break;
	}
}



