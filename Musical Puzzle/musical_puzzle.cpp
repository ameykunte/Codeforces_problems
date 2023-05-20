// https://codeforces.com/contest/1833/problem/A
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        string s;
        set<string> melodies;
        cin>>n>>s;
        for (int j = 0; j < n-1; j++)
        {
            string temp;
            temp.push_back(s[j]);
            temp.push_back(s[j + 1]);
            melodies.insert(temp);
        }

        cout << melodies.size() << endl;
    }
}