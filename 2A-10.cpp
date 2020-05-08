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
	    ll n;
        cin>>n;
        int f,p=0,q=0;
        while(n>1)
        {
        	f=0;
        	if (n % 2 == 0)
        	{
        		n /= 2;
        		p++;
        		f=1;
        	}
        	if (n % 5 == 0)
        	{
        		f=1;
        		q++;
        		n /= 5;
        	}
        	if(f==0)
        		break;
	    }
        if(n==1)
        {

        	if(p!=0 && q!=0 && p%2!=0 && q%2==0 && (p==q || abs(p-q)==1))
        		cout <<"Yes"<< endl;
        	else if(p!=0 && q!=0 && p%2!=0 && q%2!=0 && (p==q || abs(p-q)==1))
        	        		cout <<"Yes"<< endl;
        	else if(p!=0 && q!=0 && p%2==0 && q%2==0 && (p==q || abs(p-q)==1))
        	        	 cout <<"Yes"<< endl;
        	else
        		cout <<"No"<< endl;
        }
        else
        	cout <<"No"<< endl;
	}
	return 0;
}
/*
#include<stdio.h>

void fun(char *a,char *b)
{
	/*
	int i;
	for(i=0;i<n;i++)
	{
		(a[i])=(a[i])+1;
	}*/
/*
	char *temp;
	temp=a;
	a=b;
	b=temp;
}

/*
void func(char **a,char **b)
{

	char *temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	char *a="Hi",*b="bye";
	printf("%s %s",a,b);
	fun(a,b);
	printf("%s %s",a,b);
	func(&a,&b);
	printf("%s %s",a,b);
	return 0;
}
*/
