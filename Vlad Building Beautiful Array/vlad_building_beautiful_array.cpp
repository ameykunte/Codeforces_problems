// https://codeforces.com/problemset/problem/1833/C
#include <cmath>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    int arr[n];
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }
    sort(arr,arr+n);
    if (arr[0] % 2 == 1)
    {
        cout << "YES" << endl;
        return;
    }
    for (int k = 1; k < n; k++)
    {
        if (arr[k] % 2 == 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        solve(n);
    }
}