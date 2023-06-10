//https://codeforces.com/contest/1840/problem/A    
#include <cmath>
#include <iostream>
#include "string.h"
#include <bits/stdc++.h>
using namespace std;
void solve(string s)
{
    string ans = " ";

    char temp = s[0];
    for (int j = 1; j < s.length(); j++)
    {
        if (s[j] == temp)
        {
            ans.push_back(temp);
            temp = s[j+1];
            j++;
        }
    }
    cout<<ans<<endl;

}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}