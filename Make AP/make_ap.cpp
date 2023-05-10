// https://codeforces.com/contest/1624/problem/B
#include <stdio.h>
int end(long int a, long int b, long int c)
{
    long int m = (2 * b - a) / c;
    if (m > 0 && m * c == (2 * b - a))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int mid(long int a, long int b, long int c)
{
    long int m = (a + c) / (2 * b);
    if (m > 0 && m * 2 * b == a + c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(void)
{
    long int t;
    scanf("%ld", &t);
    for (long int i = 0; i < t; i++)
    {
        long int a, b, c;
        scanf("%ld %ld %ld", &a, &b, &c);

        if (a - b == b - c)
        {
            printf("YES\n");
        }
        else
        {
            long int ans = end(a, b, c) + mid(a, b, c) + end(c, b, a);
            if (ans > 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}