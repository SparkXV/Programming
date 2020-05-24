#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int m=max(a,b);
        int diff=2*min(a,b);
        if(diff>=m)
        {
            cout<<diff*diff<<"\n";
        }
        else
        {
            cout<<m*m<<"\n";
        }
        
        
    }
    return 0;
}