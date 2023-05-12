// https://codeforces.com/problemset/problem/281/A

#include <string.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    char a = s[0];
    s[0] = (char) toupper(a);
    cout<<s<<endl;
}