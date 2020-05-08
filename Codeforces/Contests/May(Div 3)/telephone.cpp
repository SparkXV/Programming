/*
 * telephone.cpp
 *
 *  Created on: May 15, 2019
 *      Author: Dell
 */
/*
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0;
        int k=0;
        for(i=0;i<s.length();i++)
        {
               if(s[i]=='8')
               {
                    k=1;
                    break;
               }
         }
        if(k==0)
        	cout<<"NO"<<'\n';
        else
        {
			if(s.length()<11)
				cout<<"NO"<<"\n";
			else if(s.length()==11)
			{
				if(s[0]=='8')
				  cout<<"YES"<<"\n";
				else
				  cout<<"NO"<<"\n";
			}
			else
			{
				if(s[0]=='8')
				{
					cout<<"YES"<<"\n";
				}
				else
				{
					int p;
					for(i=0;i<s.length();i++)
					{
						   if(s[i]=='8')
						   {
							   p=i;
							   break;
						   }
					 }
					if(s.length()-p>=11)
					{
						cout<<"YES"<<"\n";
					}
					else
					{
						cout<<"NO"<<"\n";
					}
				}
			}
        }
    }
    return 0;
}

*/
