// https://codeforces.com/problemset/problem/791/A
#include <string.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    int cap = 0;
    int small = 0;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            cap++;
        }
        else
        {
            small++;
        }
    }

    if (cap > small)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;
}