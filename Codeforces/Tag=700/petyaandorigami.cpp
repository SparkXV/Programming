/*
 * petyaandorigami.cpp
 *
 *  Created on: Apr 9, 2019
 *      Author: Dell
 */

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int a,b;
	cin>>a>>b;
	int count,res=0;
	count=a*2;
	res+=(count+b-1)/b;
	count=a*5;
	res+=(count+b-1)/b;
	count=a*8;
	res+=(count+b-1)/b;
	cout<<res<<"\n";
	return 0;
}

