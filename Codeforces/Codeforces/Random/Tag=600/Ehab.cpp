/*
 * Ehab.cpp
 *
 *  Created on: Mar 31, 2019
 *      Author: Dell
 */
/*
#include<iostream>
using namespace std;

int getnumber(int turn,int n)
{
	for(int i=n;i>=1;i--)
	{
		if(turn==1)
		{
			if(n%2==0)
			{
				return n;
			}
		}
		else
		{
			if(n%2!=0)
			{
				return n;
			}
		}
	 }
	return 0;
}
/*
int main()
{
	int n;
	cin>>n;
	int a;
	int turn=1;
	while(1)
	{
		if(turn==1)
		{
			a=getnumber(turn,n);
			if(a==0)
			{
				cout<<"Ehab";
				break;
			}
			else
				n=n-a;
			turn=0;
		}
		else
		{
			a=getnumber(turn,n);
			if(a==0)
			{
				cout<<"Mahmoud";
				break;
			}
			else
				n=n-a;
			turn=1;
		}
	}
}
*/

