#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
#include<cmath>
#include<string>
#include<set>
#include<vector>
#define MOD 1000000007
#define loop(a,b) for(int i=a;i<b;i++)
#define fast_ip ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;


int main() {
	// your code goes here
	
	ll t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	   for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    if(n==1)
        {
            cout<<a[n-1]<<"\n";
        }
        else
        {
           int p;
           int dp[n]; 
           dp[n-1]=1;
           ll sum[n];
           sum[n-1]=a[n-1];
           for(int i=n-2;i>=0;i--)
           {
               p=INT_MIN;
               int index;
               int prev;
               for(int j=i+1;j<n;j++)
               {
                   if((a[j]>=0 && a[i]<=0) ||(a[j]<=0 && a[i]>=0))
                   {
                       if(p<dp[j])
                       {
                          p=max(p,dp[j]);
                          prev=a[j];
                          index=j;
                        } 
                        else if(p==dp[j])
                        {
                            if(a[j]>prev)
                            {
                                index=j;
                            }
                        }
                    }
                 }
               if(p==INT_MIN)
               {
                   dp[i]=1;
                   sum[i]=a[i];
               }
               else
               {
                   dp[i]=1+p;
                   sum[i]=a[i]+sum[index];
               }
            }
            p=INT_MIN;
            for(int i=0;i<n;i++)
            {
                p=max(p,dp[i]);
            }
            ll res=LLONG_MIN;
            for(int i=0;i<n;i++)
            {
                if(p==dp[i])
                {
                    res=max(res,sum[i]);
                }
            }
            cout<<res<<"\n";
        }
    }
	return 0;
}

