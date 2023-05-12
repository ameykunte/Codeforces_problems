//https://codeforces.com/contest/1675/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, x, y;
        cin>>a>>b>>c>>x>>y;
 
        int dogf = a - x;
        int catf = b - y;

        //anybody have a better approach?

        if (dogf >= 0 && catf >= 0)
        {
            
            cout<<"YES"<<endl;
        }
        else if (dogf >= 0 && catf < 0 && c + catf >= 0)
        {
            cout<<"YES"<<endl;
        }
        else if (catf >= 0 && dogf < 0 && c + dogf >= 0)
        {
            cout<<"YES"<<endl;
        }
        else if (catf<0 && dogf <0 && c + dogf +catf >= 0){
            cout<<"YES"<<endl;
        }
        else{
           cout<<"NO"<<endl;
        }
    }
}