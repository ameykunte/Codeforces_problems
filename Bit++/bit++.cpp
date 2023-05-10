// https://codeforces.com/problemset/problem/282/A

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    long long int n,x=0;
    cin >> n ;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[1] == '+' || s[0] == '+' || s[2] == '+') //unsure about the way its ginna be given
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x<< endl;
    return 0;
}
