// https://codeforces.com/problemset/problem/791/A
#include <string.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    count = n / 5;  // n is a multiple of 5
    if (n % 5 != 0) // n is not
    {
        count++;
    }

    cout << count << endl;
}