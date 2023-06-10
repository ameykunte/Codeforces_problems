//https://codeforces.com/problemset/problem/118/A
#include <cmath>
#include <iostream>
#include <cctype>
#include<bits/stdc++.h>
#include <string.h>
using namespace std;
//idiots think 'y' is a vowel, smh
int main(){
    string s= "aSA";
    cin>>s;

    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    

    for(int i = 0;i<s.length();i++){
        if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u' || s[i] == 'y'){
            continue;
        }else{
            cout<<"."<<s[i];
        }
    }


}