//https://codeforces.com/contest/1741/problem/B
#include <cmath>
#include <iostream>
#include "string.h"
using namespace std;

void gen(long long int n)
{
    if (n == 3)
    {
        cout << -1 << endl;
    }
    else if (n == 2)
    {
        cout << "2 1" << endl;
    }
    else
    {
        cout << n << " " << n - 1 << " ";
        for (int i = 1; i < n - 1; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    long long int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        gen(n);
    }
    return 0;
}
