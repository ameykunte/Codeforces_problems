// https://codeforces.com/problemset/problem/677/A

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int num = 0;

    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        cin >> temp;

        if (temp <= h)
        {
            num++;
        }
        else
        {
            num = num + 2;
        }
    }
    cout<<num;



}