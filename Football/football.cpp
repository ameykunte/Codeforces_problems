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
    int ans = 0;
    int count = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i+1])
        {
            count++;
        }else{
            count = 1;
        }
        if(count>=7){
            ans = 1;
            break;

        }

    }
    if(ans == 1){
        cout<<"YES"<<endl;}
    else{
        cout<<"NO"<<endl;
    }
    
}