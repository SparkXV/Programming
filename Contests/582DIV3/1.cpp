#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int res=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            int diff=abs(i-j);
            if(diff & 1)
               cnt++;
        }
        res=min(res,cnt);
    }
    cout<<res<<"\n";
    return 0;
}