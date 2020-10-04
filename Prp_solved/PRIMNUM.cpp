#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 2)
        printf("-1");
    else if (n == 3)
    {
        printf("210\n");
    }
    else
    {
        int i;
        printf("1");
        if (n % 6 == 4)
        {
            for (i = 1; i <= (n - 3); i++)
            {
                printf("0");
            }
            printf("50");
        }
        else if (n % 6 == 5)
        {
            for (i = 1; i <= (n - 3); i++)
            {
                printf("0");
            }
            printf("80");
        }
        else if (n % 6 == 0)
        {
            for (i = 1; i <= (n - 4); i++)
            {
                printf("0");
            }
            printf("170");
        }
        else if (n % 6 == 1)
        {
            for (i = 1; i <= (n - 3); i++)
            {
                printf("0");
            }
            printf("20");
        }
        else if (n % 6 == 2)
        {
            for (i = 1; i <= (n - 4); i++)
            {
                printf("0");
            }
            printf("200");
        }
        else if (n % 6 == 3)
        {
            for (i = 1; i <= (n - 4); i++)
            {
                printf("0");
            }
            printf("110");
        }
    }
    return 0;
}
