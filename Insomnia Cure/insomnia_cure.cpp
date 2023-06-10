//https://codeforces.com/problemset/problem/148/A
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int solve(int k,int l ,int m, int n,int x,int y){
    if(x%k == 0 ||x%l == 0||x%m == 0||x%n == 0 ){
        return ++y;
    }else{
        return y;
    }

}

int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int y = 0;
    for(int i = 1;i<=d;i++){
        y = solve(k,l,m,n,i,y);
    }
    cout<<y<<endl;
}