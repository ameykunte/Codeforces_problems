//https://codeforces.com/contest/1/problem/A
#include <cmath>
#include <iostream>
using namespace std;
 
int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;
    long long int ans = ceil((long double)n/a)*ceil((long double)m/a);
    cout << ans<< endl;
    return 0;
}