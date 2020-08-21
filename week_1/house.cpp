#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    if (t >= 1 && t <= 23)
    {
        while (t--)
        {
            long long int n, x, count = 0, y = 0;
            scanf("%lld", &n);
            x = n;
            if (n >= 1 && n <= 1000000000)
            {
                do
                {
                    count++;
                    n = n / 10;
                } while (n != 0);
                n = x;
                if (count == 1)
                    printf("%lld\n", n);
                else if (count == 2)
                {
                    y = 9 + (n - 9) * 2;
                    printf("%lld\n", y);
                }
                else if (count == 3)
                {
                    y = 189 + (n - 99) * 3;
                    printf("%lld\n", y);
                }
                else if (count == 4)
                {
                    y = 2889 + (n - 999) * 4;
                    printf("%lld\n", y);
                }
                else if (count == 5)
                {
                    y = 38889 + (n - 9999) * 5;
                    printf("%lld\n", y);
                }
                else if (count == 6)
                {
                    y = 488889 + (n - 99999) * 6;
                    printf("%lld\n", y);
                }
                else if (count == 7)
                {
                    y = 5888889 + (n - 999999) * 7;
                    printf("%lld\n", y);
                }
                else if (count == 8)
                {
                    y = 68888889 + (n - 9999999) * 8;
                    printf("%lld\n", y);
                }
                else if (count == 9)
                {
                    y = 788888889 + (n - 99999999) * 9;
                    printf("%lld\n", y);
                }
                else if (count == 10)
                {
                    y = 8888888889 + (n - 999999999) * 10;
                    printf("%lld\n", y);
                }
            }
        }
    }
    return 0;
}


