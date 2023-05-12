//https://codeforces.com/contest/1832/problem/
#include <cmath>
#include <iostream>
#include "string.h"
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        if (a.length() < 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            int arr[26] = {0};
            for (int j = 0; j < a.length()/2; j++)
            {
                int num = a[j];
                arr[num - 97] += 1;
            }
            int count = 0;
            for (int k = 0; k < 26; k++)
            {
                if (arr[k] >= 1)
                {
                    count++;
                }
            }

            if (count > 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}