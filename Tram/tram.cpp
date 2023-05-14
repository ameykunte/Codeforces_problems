// https://codeforces.com/problemset/problem/116/A

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = 0;
    int max = num;
    for (int i = 0; i < n; i++)
    {
        int ai, bi;
        cin >> ai >> bi;
        num = num - ai + bi;
        if (num > max)
        {
            max = num;
        }
    }
    cout << max;
}