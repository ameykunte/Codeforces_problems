// https://codeforces.com/problemset/problem/791/A
#include <string.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int count = 0;
    count = k * w * (w + 1) / 2 - n;
    if(count<0){
        count=0;
    }
    cout << count << endl;
}