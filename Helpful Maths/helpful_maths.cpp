// https://codeforces.com/problemset/problem/339/A
#include <string.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // take string
    string s;
    cin >> s;
    int length = s.length();

    // extract nums into array and sort
    int arr[101];
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (s[i] != '+')
        {
            arr[count++] = s[i] - '0'; // imp coz number is input as string
        }
        else
        {
            continue;
        }
    }
    sort(arr, arr + count);

    // print back the sorted nums with the +
    for (int i = 0; i < count; i++)
    {
        cout << arr[i];
        if (i == count - 1)
        {
            break;
        }
        cout << '+';
    }
}