// https://codeforces.com/contest/1674/problem/B
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    y++;

    while (true)
    {

        int th, hu, te, un; // units,tens,hundredths,thousandths
        un = y % 10;
        te = y / 10 % 10;
        hu = y / 100 % 10;
        th = y / 1000;

        if (un != te && un != hu && un != th && te != hu && te != th && hu != th)
        {
            break;
        }
        y++;
    }
    cout << y << endl;
}