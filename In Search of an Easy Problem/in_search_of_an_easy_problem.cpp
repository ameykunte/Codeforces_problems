
// https://codeforces.com/contest/1674/problem/B
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> temp;
        if (temp == 1)
        {
            cout << "HARD" << endl;
            break;
            return 0;
        }
    }
    if (temp != 1)
    {
        cout << "EASY" << endl;
        return 0;
    }
}