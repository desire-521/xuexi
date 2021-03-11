#include <stdio.h>  
int main()
{
    int num = 0, i = 0;
    scanf_s("%d", &num);
    printf("奇数序列为：");
    for (i = 31;i >= 0;i -= 2)
    {
        printf("%d ", (num >> i) & 1);
    }
    printf("\n");
    printf("偶数序列为：");
    for (i = 30;i >= 0;i -= 2)
    {
        printf(" %d", (num >> i) & 1);
    }
    return 0;
}

#include<stdio.h>
void print(int start, int end)
{
    int i = 0;
    for (i = 0;i < start;i++)
    {
        printf(" ");
    }
    for (i = 0;i < end;i++)
    {
        printf("*");
    }
    printf("\n");
}
int main()
{
    int i = 0;
    for (i = 1;i < 7;i++)
    {
        print(7 - i, 2 * i - 1);
    }
    print(0, 2 * 7 - 1);
    for (i = 6;i > 0;i--)
    {
        print(7 - i, 2 * i - 1);
    }
    return 0;
}

#include<stdio.h >
#include<math.h>
int main()
{
    int i = 0;
    for (i = 10; i < 100000; i++)
    {
        int a, b, c, d, e;
        a = i % 10;
        b = i % 100 / 10;
        c = i % 1000 / 100;
        d = i % 10000 / 1000;
        e = i / 10000;
        for (int n = 1; n <= 6; n++)
        {
            if (i == pow(a, n) + pow(b, n) + pow(c, n) + pow(d, n) + pow(e, n))
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}