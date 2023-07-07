//https://codeforces.com/problemset/problem/96/A
#include <cmath>
#include <iostream>
#include <cctype>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i+1])
        {
            count++;
        }
        if(count>=7){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    
}