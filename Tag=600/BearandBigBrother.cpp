/*
 * BearandBigBrother.cpp
 *
 *  Created on: Apr 1, 2019
 *      Author: Dell
 */



#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int count=0;
	while(a<=b)
	{
		count++;
		a=3*a;
		b=2*b;
	}
	cout<<count<<"\n";
	return 0;
}


