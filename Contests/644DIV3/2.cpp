#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int e=0;
        int o=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i]; 
            if(a[i]%2==0)
               e++;
            else
            {
                o++;
            }
            
        }
        if(e%2==0 && o%2==0)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            sort(a,a+n);
            int f=0;
            for(int i=0;i<n-1;i+=2)
            {
                if(abs(a[i]-a[i+1])!=1 && (a[i]%2)!=(a[i+1]%2))
                {
                    cout<<"NO"<<"\n";
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                cout<<"YES"<<"\n";
            }
        
        }
        
        
    }
    return 0;
}