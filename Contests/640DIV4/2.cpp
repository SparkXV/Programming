
#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
#define sl int
#include<cmath>
#include<string>
#include<set>
#include<vector>
#define MOD 1000000007
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
        if(n<k)
          cout<<"NO"<<"\n";
        else
        {

            if(n%k==0)
            {
                vector<int>v;
                cout<<"YES"<<"\n";
                for(int i=0;i<k;i++)
                {
                    cout<<n/k<<" ";
                }
                cout<<"\n";
            }
            else
            {
                int q=n/k;
                vector<int>v;
                for(int i=0;i<k-1;i++)
                {
                    v.pb(q);
                }
                int c=n-(k-1)*q;
                v.pb(c);
                if(v.size()%2==0)
                {
                    cout<<"NO"<<"\n";
                }
                else
                {
                    int even=0;
                    for(int i=0;i<v.size();i++)
                    {
                        if(v[i]%2!=0)
                        {
                            even=1;
                            break;
                        }
                    }
                    if(even==0)
                    {
                        cout<<"YES"<<"\n";
                        for(int i=0;i<v.size();i++)
                        {
                            cout<<v[i]<<" ";
                        }
                        cout<<"\n";
                        continue;
                    }
                    int odd=0;
                    for(int i=0;i<v.size();i++)
                    {
                        if(v[i]%2==0)
                        {
                            odd=1;
                            break;
                        }
                    }
                    if(odd==0)
                    {
                        cout<<"YES"<<"\n";
                        for(int i=0;i<v.size();i++)
                        {
                            cout<<v[i]<<" ";
                        }
                        cout<<"\n";
                        continue;
                    }
                    int x=v.size()-1;
                    for(int i=0;i<v.size()-1;i++)
                    {
                        v[i]=v[i]-1;
                    }
                    v[v.size()-1]+=x;
                    int f=1;
                    for(int i=0;i<v.size();i++)
                    {
                        if(v[i]<=0)
                        {
                            f=0;
                            break;
                        }
                    }
                    if(f==0)
                    {
                        cout<<"NO"<<"\n";
                    }
                    else
                    {
                        cout<<"YES"<<"\n";
                        for(int i=0;i<v.size();i++)
                        {
                            cout<<v[i]<<" ";
                        }
                        cout<<"\n";
                    }
                    
                }
               
            }
            
            
        }
        
	}
	return 0;
}