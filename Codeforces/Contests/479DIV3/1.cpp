#include<iostream>
#define ll long long
using namespace std;
 
int main()
{
	ll n,k,i;
	cin>>n>>k;
	for(i=0;i<k;i++)
	{
		if(n%10==0)
			n=n/10;
		else
			n=n-1;
	}
	cout<<n;
	return 0;
}