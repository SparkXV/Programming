
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
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int q=0;
        int i=0;
        int cd=k;
        int c[k];
        int x=n-1;
        int z=0;
        while(cd--)
        {
            c[z]=b[x];
            z++;
            x--;
        }
        while(q<k)
        {
           if(a[i]<c[q])
           {
               a[i]=c[q];
               i++;
           }
           q++;
        }
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<"\n";
        
    }
    return 0;
}
