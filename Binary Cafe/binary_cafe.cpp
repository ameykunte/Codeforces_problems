#include <cmath>
#include <iostream>
#include "string.h"
#include <bits/stdc++.h>
using namespace std;
void solve(int n, int k)
{

    if (n>=pow(2,k))
    {
        cout << (int)pow(2, k) << endl;
    }
    else
    {
        cout << n+1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n, k;
        cin >> n >> k;

        solve(n, k);
    }
    return 0;
}
