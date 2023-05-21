// https://codeforces.com/problemset/problem/1829/A
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void solve(char s[])
{
    char ref[] = "codeforces";
    int result = 0;
    for (int j = 0; j < 10; j++)
    {
        if (ref[j] != s[j])
        {
            result++;
        }
    }

    cout << result << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char s[10];
        for (int k = 0; k < 10; k++)
        {
            cin >> s[k];
        }

        solve(s);
    }
}