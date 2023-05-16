//https://codeforces.com/problemset/problem/344/A
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = 0;
    int count = 0;
    int input;
    for (int i = 0; i < n; i++)
    {

        cin >> input;
        if (input!=temp)
        {
            count++;
            temp = input;
        }
        

    }

    cout<<count<<endl;
    

}