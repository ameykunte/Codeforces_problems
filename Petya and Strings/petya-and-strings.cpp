//https://codeforces.com/contest/112/problem/A
#include <string>
#include <algorithm>
#include <cctype>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    int ans;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    ans = strcmp(a.c_str(), b.c_str());
    cout << ans << endl;
    return 0;
}
