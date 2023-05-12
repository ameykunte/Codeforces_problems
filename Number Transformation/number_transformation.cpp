//https://codeforces.com/contest/1674/problem/A
#include <stdio.h>

int check_div(int a)
{
    int B = a;
    int A = 1;
    printf("%d %d\n",A,B);
  
}
int main()
{
    int t = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (y % x != 0)
        {
            printf("0 0\n");
        }
        else if (y == x)
        {
            printf("3 1\n");
        }
        else{
            int a = y / x; 
            check_div(a);
        }
    }
}