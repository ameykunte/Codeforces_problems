#include <cmath>
#include <iostream>
#include "string.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        long long int arr_sum_init = 0;
        long long int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + n);
        int sum_arr[n];
        sum_arr[0] = arr[0];
        for (int j = 1; j < n; j++)
        {
            sum_arr[j] = sum_arr[j-1] + arr[j];
        }
        int s_max = sum_arr[n-1-k];

        for (int j = 0; j < k; j++)
        {
            int temp = sum_arr[n - 1-k +j] - sum_arr[2*j-1];
            if(temp>s_max){
                s_max = temp;
            }
        }
        cout<<s_max<<endl;

    }
    return 0;
}
