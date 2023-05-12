//https://codeforces.com/contest/1741/problem/A
#include <cmath>
#include <iostream>
#include "string.h"
using namespace std;

int val(char x)
{
    if (x == 83)// bad programming :(
    {
        return 1;
    }
    else if (x == 77)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

void comp(string a, string b)
{
    if (a == b)
    {
        cout << "="
             << "\n";
    }
    else
    {
        long long int a_len, b_len, a_val, b_val;
        a_len = a.length();
        b_len = b.length();
        a_val = val(a[a_len - 1]);
        b_val = val(b[b_len - 1]);
        if (a_val > b_val)
        {
            cout << ">"
                 << "\n";
        }
        else if (a_val < b_val)
        {
            cout << "<"
                 << "\n";
        }
        else
        {
            if (a_val == 1)
            {
                if (a_len > b_len)
                {
                    cout << "<"
                         << "\n";
                }
                else
                {
                    cout << ">"
                         << "\n";
                }
            }
            else
            {
                if (a_len > b_len)
                {
                    cout << ">"
                         << "\n";
                }
                else
                {
                    cout << "<"
                         << "\n";
                }
            }
        }
    }
}

int main()
{
    long long int t;
    string a, b;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        comp(a,b);
    }

    return 0;
}