// https://codeforces.com/problemset/problem/236/A
#include <string.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int arr[26] = {0};
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        int a = s[i];
        a = a - 97;
        arr[a] += 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    if (count % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
}