#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int p=INT_MAX;
        int l=1;
        int e=k;
        while(l<=e)
        {
            int mid=((e-l)/2)+l;

            if(n%mid==0)
            {
                p=min(p,(n/mid));
                l=mid+1;
            }
            else
            {
                if((n/2)<mid)
                {
                    e=mid-1;
                }
                else
                {
                    l=mid+1;
                }
                
            }
        }
        if(k>=n)
        {
            cout<<1<<"\n";
        }
        else
        {
            if(p==INT_MAX)
            {
                cout<<n<<"\n";
            }
            else
            {
                cout<<p<<"\n";
            }
            
        }
        
    }
    return 0;
}