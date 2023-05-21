// https://codeforces.com/problemset/problem/1829/B
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int temp = 0;
        int count = 0;
        int max = count;
        int n;
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            if (temp == 0)
            {
                count++;
                if (count > max)
                {
                    max = count;
                }
            }
            else
            {
                count = 0;
            }
        }
        cout << max << endl;
    }
}