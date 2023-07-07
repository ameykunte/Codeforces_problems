//https://codeforces.com/contest/1846/problem/A

#include <cmath>
#include <iostream>
#include "string.h"
#include <bits/stdc++.h>
using namespace std;


void solve(int n)
{
    int count = 0 ;
    for(int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        if(a > b)
        {
            count++;
        }
        
    }
    cout<<count<<endl;

}

int main()
{
    int t;
    cin >> t;
    for (int q = 0; q < t; q++)
    {
        int n;
        cin >> n ;

        solve(n);
    }
    return 0;
}