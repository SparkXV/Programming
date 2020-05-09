#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
#define sl int
#include<cmath>
#include<string>
#include<set>
#include<vector>
#define MOD 1000000007
#define loops(i,a,b) for(sl i=a;i<b;i++)
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define fast_ip ios_base::sync_with_stdio(false);cin.tie(NULL)
#define pb push_back
#define ump unordered_map
#define ums unordered_set
using namespace std;

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
void initialize()
{
    for (ll i=0; i<=100001; i++) 
    {
          prime[i]=true;
    }
    //sieve();
}
int main() {
	// your code goes here
	fast_ip;
	ll t;
	cin>>t;
	//initialize();
	while(t--)
	{
        ll n;
        cin>>n;
        ll a[n];
        int k=1;
        loop(i,0,n)
        {
            ll p=pow(2,k);
            k++;
            a[i]=p;
        }
        ll diff=0;
        for(int i=0;i<(n/2)-1;i++)
        {
            diff=diff+a[i];
        }
        diff=diff+a[n-1];
        ll diff2=0;
        for(int i=(n/2)-1;i<n-1;i++)
        {
           diff2=diff2+a[i];
        }
        ll res=abs(diff-diff2);
        cout<<res<<"\n";
	}
	return 0;
}