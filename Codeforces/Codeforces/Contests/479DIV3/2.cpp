#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<string,int>mp;
    string temp="";
    for(int i=0;i<n-1;i+=1)
    {
        temp=temp+s[i]+s[i+1];
        mp[temp]++;
        temp="";
    }
    unordered_map<string,int>::iterator it;
    int res=INT_MIN;
    string t="";
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second > res)
        {
            t=it->first;
            res=it->second;
        }
    }
    cout<<t<<"\n";
    return 0;
}