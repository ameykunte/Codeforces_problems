// https://codeforces.com/problemset/problem/734/A
#include <cmath>
#include <iostream>
#include "string.h"
using namespace std;
int main()
{
    int n;
    cin >> n;
    char temp; //this approach saves memory by not declaring an entire array
    int A = 0, D = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp== 'A')
        {
            A++;
        }
        else
        {
            D++;
        }
    }

    if (A > D)
    {
        cout << "Anton";
    }
    else if (D > A)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}