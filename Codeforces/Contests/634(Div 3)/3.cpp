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

// Not working
bool prime[10000001];
void sieve(ll n) 
{ 
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
} 
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
        // tleelt
	    int n;
        cin>>n;
        int res=1;
        int b[n];
        int a[200006]={0};

        loop(0,n)
        {
            cin>>b[i];
        }
        if(n==1)
        {
            cout<<0<<"\n";
            continue;
        }
        loop(0,n)
        {
            int x=b[i];
            a[x]=a[x]+1;
        }
        int ndist=0;
        loop(1,n+1)
        {
            if(a[i]>=1)
            ndist++;
        }
        // 1 4    4 4
        for(int i=1;i<n+1;i++)
        {
            if(a[i]>=1)
            {
                if(ndist>=(a[i]-1))
                  res=max(res,(a[i]-1));
                else if(ndist<(a[i]-1))
                   res=max(res,ndist);
            }
        }
        cout<<res<<"\n";
	}
	return 0;
}
