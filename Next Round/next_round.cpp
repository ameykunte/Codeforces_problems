// https://codeforces.com/problemset/problem/158/A
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    long long int n, k, a, ans = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] >= arr[k - 1] && arr[j] > 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}