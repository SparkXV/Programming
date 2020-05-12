#include<bits/stdc++.h>

#define MOD 1000000007
#define ll long long
#define sl int
//#define loop(i,a,b) for(sl i=a;i<b;i++)
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
int small(int n)
{
    if(n%2==0)
    {
      return 2;
    }
    else
    {
        int r=sqrt(n);
        int d=3;
        while((n%d!=0)&&d<r)
        {
            d=d+2; 
        }
        if(n%d==0)
            return d;
        else
            return n; 
    }
}
int main() {
	// your code goes here
	fast_ip;
	ll t;
	cin>>t;
	//initialize();
	while(t--)
	{
	    int n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            ll res=n+k*2;
            cout<<res<<"\n";
        }
        else
        {
            int p=1;
            int q=k-1;
            ll res=n+p*small(n)+q*2;
            cout<<res<<"\n";
        }
        
	}
	return 0;
}