#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(mp[x]==0)
           v.push_back(x);
        mp[x]++;
    }
    sort(v.begin(),v.end());
    if(k==0)
    {
        int rr=v[0]-1;
        if(rr>=1 && rr<=1000000009)
           cout<<rr<<"\n";
        else
           cout<<-1<<"\n";
    }
    else
    {
        int cnt=0;
        int f=0;
        int num;
        for(int i=0;i<v.size();i++)
        {
            cnt=cnt+mp[v[i]];
            if(cnt==k)
            {
                num=v[i];
                break;
            }
            else if(cnt>k)
            {
                f=1;
                break;
            }
        }
        if(f==0)
           cout<<num<<"\n";
        else
        {
            cout<<-1<<"\n";
        } 
    }
    
}