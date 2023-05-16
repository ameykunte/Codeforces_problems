// https://codeforces.com/problemset/problem/467/A
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        int p, q;

        cin >> p >> q;
        if (q - p >= 2)
        {
            temp++;
        }
    }
    cout<<temp<<endl;
}