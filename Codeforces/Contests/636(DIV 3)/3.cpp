#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
#include<cmath>
#include<string>
#include<set>
#include<vector>
#define MOD 1000000007
#define loop(a,b) for(ll i=a;i<b;i++)
#define fast_ip ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main() {
	// your code goes here
	
	ll t;
	cin>>t;
    /*
	for (ll i=0; i<=100001; i++) 
    {
          prime[i]=true;
    }
    sieve();
    */
	while(t--)
	{
	    int n;
        cin>>n; 
        int a[n];
        loop(0,n)
        {
            cin>>a[i];
        }
        int dp[n];
        dp[n-1]=0;
        int le=1;
        int p;
        for(int i=n-2;i>=0;i--)
        {
               p=INT_MIN;
               for(int j=i+1;j<n;j++)
               {
                   if((a[j]>=0 && a[i]<=0) || (a[j]<=0 && a[i]>=0))
                   {
                        p=max(p,dp[j]);
                   }     
               }
               if(p==INT_MIN)
               {
                   dp[i]=0;
               }
               else
                  dp[i]=1+p;
        }
        p=INT_MIN;
        for(int i=0;i<n;i++)
        {
            p=max(p,dp[i]);
        }
        int sum;
        int res;
        int dp1[n];
        dp1[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
               sum=INT_MIN;
               for(int j=i+1;j<n;j++)
               {
                   if((a[j]>=0 && a[i]<=0) || (a[j]<=0 && a[i]>=0))
                   {
                        sum=max(sum,dp1[j]);
                   }     
               }
               if(p==INT_MIN)
               {
                   dp1[i]=0;
               }
               else
                  dp1[i]=1+sum;
               if(dp1[i])
        }
	}
	return 0;
}
