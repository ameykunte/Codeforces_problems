// https://codeforces.com/contest/1624/problem/A

#include <stdio.h>

long int main(void)
{
    long int t;
    scanf("%ld", &t);
    for (long int i = 0; i < t; i++)
    {
        long int n = 0;
        scanf("%ld", &n);

        long int min = 1000000002;
        long int max = 0;
        for (long int j = 0; j < n; j++)
        {
            long int temp = 0;

            scanf("%ld", &temp);
            if (temp > max)
            {
                max = temp;
            }
            if (temp < min)
            {
                min = temp;
            }
        }
        printf("%ld\n", max - min);
    }
}