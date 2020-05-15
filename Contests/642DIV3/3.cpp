#include<bits/stdc++.h>
using namespace std;
long long int dp[500005];  
int main()
{
    dp[1]=0;
    dp[3]=8;
    for(long long int i=5;i<500005;i+=2)
    {
        long long int r=i+(i-1)+(i-1)+(i-2);
        long long int ee=((i-1)/2)*r;
        dp[i]=dp[i-2]+ee;
    }
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        cout<<dp[n]<<"\n";
    }
    return 0;
}