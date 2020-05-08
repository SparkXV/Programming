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
    /*
	for (ll i=0; i<=100001; i++) 
    {
          prime[i]=true;
    }
    sieve();
    */
	while(t--)
	{
        // tleelt
	    int n,a,b;
	    cin>>n>>a>>b;
        string s="";
        char ch='a';
        for(int i=0;i<b;i++)
        {
            s=s+ch;
            ch=ch+1;
        }
        int j=0;
        for(int i=0;i<n-b;i++)
        {
            s=s+s[j];
            j++;
            if(j==b)
            {
                j=0;
            }
        }
        cout<<s<<"\n";
	}
	return 0;
}
