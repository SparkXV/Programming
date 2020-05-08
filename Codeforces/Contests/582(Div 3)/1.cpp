/*
 * 1.cpp
 *
 *  Created on: Aug 30, 2019
 *      Author: Dell
 */

/*

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

long long fast_exp(long long base, long long power) {
    long long result = 1;
    while(power>0) {

        if(power%2==1) {
            result=(result*base)%MOD;
        }
        base = (base*base) % MOD;
        power = power/2;
    }
    return result%MOD;
}
int main() {
	// your code goes here
        ll t;
        cin>>t;
        while(t--)
        {
			ll a,b,c;
			cin>>a>>b>>c;
			ll cnt;
			if(a<b)
			{
				if(c==0)
				{
				   cout<<0<<"\n";
				}
				else if(abs(a-b)>=c)
					  cout<<0<<"\n";
				else{
					if((c/2)==a)
					  cout<<c-a+1<<"\n";
					if((c/2)==a-1)
					   cout<<c-a<<"\n";
				}
			}
			else if(a==b)
				if(c==0)
					 cout<<0<<"\n";
				else
					cout<<ceil(double(c)/2)<<"\n";
			else
				if(c==0)
				   cout<<1<<"\n";
				else
				{
					cnt=c-b+1;
					int p=c-cnt;
					int q=cnt;
					a=a+p;
					b=b+q;
					if(a>b)
						cnt=cnt+1;
					cout<<cnt<<"\n";
				}
	    }
	return 0;
}
*/
/*
#include<bits/stdc++.h>
#define MOD 1000000007
#include<cmath>
#define pb push_back
#define ll long long
using namespace std;

int main()
{
   string s;
   cin>>s;
   int n=s.length();
   int dp[n];
   if(s[n-1]=='2' || s[n-1]=='4' || s[n-1]=='6' || s[n-1]=='8')
       dp[n-1]=1;
   else
       dp[n-1]=0;
    for(int i=n-2;i>=0;i--)
    {
        if(s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8')
               dp[i]=dp[i+1]+1;
        else
             dp[i]=dp[i+1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<"\n";
}

*/
