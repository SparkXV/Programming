/*
 * Hulk.cpp
 *
 *  Created on: Mar 19, 2019
 *      Author: Dell
 */


#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str="I hate";
	string str1="that";
	string str3="I love";
	string str4="it";
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<str<<" ";
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(i%2==0)
			  cout<<str3<<" ";
			else
				cout<<str<<" ";
			if(i!=n)
			    cout<<str1<<" ";
		}
	}
	cout<<str4;
    return 0;
}





