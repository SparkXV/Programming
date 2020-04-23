/*
 * AntonandPolyhedrons.cpp
 *
 *  Created on: Apr 1, 2019
 *      Author: Dell
 */

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum=0;
	while(n--)
	{
		string s;
		cin>>s;
		if(s[0]=='C')
		{
			sum=sum+6;
		}
		if(s[0]=='T')
		{
			sum=sum+4;
		}
		if(s[0]=='O')
		{
			sum=sum+8;
		}
		if(s[0]=='D')
		{
			sum=sum+12;
		}
		if(s[0]=='I')
		{
			sum=sum+20;
		}

	}
	cout<<sum<<"\n";
	return 0;
}


