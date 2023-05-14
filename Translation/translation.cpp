// https://codeforces.com/problemset/problem/41/A
#include <cmath>
#include <iostream>
#include "string.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    reverse(s.begin(), s.end());
    int ans = s.compare(t);
    if (ans == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}