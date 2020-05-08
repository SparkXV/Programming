/*
 * removeprogression.cpp
 *
 *  Created on: Aug 31, 2019
 *      Author: Dell
 */
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,d;
	cin>>n>>d;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
    sort(a,a+n);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
    	int l=0;
    	int r=n-1;
    	int prev=0;
    	while(l<=r)
    	{
    		int m=l+(r-l)/2;
    		cout<<m<<" ";
    		if(abs(a[i]-a[m])>d)
    			r=m-1;
    		else if(abs(a[i]-a[m])<=d){
    			prev++;

    			r=m-1;
    		}
    	}
    	cout<<"\n";
    	//cout<<prev<<" ";
    	if(prev==1)
    	{}
    	else
    		cnt=cnt+prev-1;
    }
    cout<<cnt<<"\n";

	return 0;
}
*/

