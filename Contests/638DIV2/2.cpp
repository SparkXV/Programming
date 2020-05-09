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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        loop(i,0,n)
        {
            cin>>a[i];
        }
        ll sum=0;
        vector<ll>v;
        loop(i,0,k)
        {
            sum=sum+a[i];
            v.pb(a[i]);
        }
        if(k%2==0)
        {
            loop(i,0,k-1)
            {
                v.pb(a[i]);
            }
        }
        else
        {
            loop(i,0,k)
            {
                v.pb(a[i]);
            }
        }
        loop(i,k,n)
        {
            v.pb(a[i]);
        }
        int su=0;
        int l=v.size();
        int f;
        loop(i,0,l-k+1)
        {
            f=0;
            su=0;
            loop(j,i,i+k)
            {
                su=su+v[j];
            }
            if(su!=sum)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<v.size()<<"\n";
            loop(i,0,l)
            {
                cout<<v[i]<<" ";
            }
            cout<<"\n";
        }
	}
	return 0;
}