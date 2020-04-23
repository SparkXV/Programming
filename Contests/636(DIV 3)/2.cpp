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
        int even=2;
        int odd =1;
            
        vector<int>v;
        vector<int>v1;
        //v.push_back(2);
        //v1.push_back(1);
        int f=0;
        int sum=0;
        int sum1=0;
        for(int i=0;i<n/2;i++)
        {
            f=1;
            sum=sum+even;
            sum1=sum1+odd;
            v.push_back(even);
            v1.push_back(odd);
            even=even+2;
            odd=odd+2;   
            
        }
        if(f==0)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        else
        {
            if(sum!=sum1)
            {
                int d=sum-sum1;
                if(d%2==0)
                {
                    v1[v1.size()-1]+=d;
                    cout<<"YES"<<"\n";
                    loop(0,v.size())
                    {
                            cout<<v[i]<<" ";
                    }
                    loop(0,v1.size())
                    {
                            cout<<v1[i]<<" ";
                    }
                    cout<<"\n";
                }
                else
                {
                    cout<<"NO"<<"\n";
                }    
            }
            else
            {
                    cout<<"YES"<<"\n";
                    loop(0,v.size())
                    {
                        cout<<v[i]<<" ";
                    }
                    loop(0,v1.size())
                    {
                        cout<<v1[i]<<" ";
                    }
                    cout<<"\n";
            }
                
        }
        
	}
	return 0;
}
