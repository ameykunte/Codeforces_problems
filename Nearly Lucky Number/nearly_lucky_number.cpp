#include <cmath>
#include <iostream>
using namespace std;
void is_lucky(int num)
{


    if (num!= 4 && num !=7)
    {
        cout<<"NO"<<endl;
        
    }else{
        cout<<"YES"<<endl;
    }
    
}

int main()
{
    string n;
    cin >> n;
    int num = 0;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i]=='4'||n[i]=='7')
        {
            num++;
        }
        
    }
    
    is_lucky(num);
}