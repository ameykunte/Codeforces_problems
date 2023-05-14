//https://codeforces.com/contest/1674/problem/B
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        int first,second;

        first = s[0];
        first-=97; // first letter turned into val

        second = s[1];
        second -=97; // second letter turned into val

        int index = first*25; // a = 0 

        if (second>first) //account for a starting at 0
        {
            index += second;
        
        }else{
            index +=second + 1;

        }
        
        cout<<index<<endl;
    }
    
}