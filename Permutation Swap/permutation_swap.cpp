//https://codeforces.com/problemset/problem/1828/B
#include <cmath>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    int ans = 0;
    for(int j = 1;j<=n ;j++){
        int temp;
        cin>>temp;
        ans = __gcd(ans,abs(temp - j));
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        solve(n);
    }
}