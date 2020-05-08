#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    //unordered_set<int>s;
    vector<int>v;
    for(int i=n-1;i>=0;i--)
    {
        if(v.empty()==true)
        {
            v.push_back(a[i]);
        }
        else
        {
            int k=0;
            for(int j=0;j<v.size();j++)
            {
                if(v[j]==a[i])
                {
                    k=1;
                    break;
                }
            }
            if(k==0)
            {
                v.push_back(a[i]);
            }
        }
    }
    cout<<v.size()<<"\n";
    for(int j=v.size()-1;j>=0;j--)
    {
        cout<<v[j]<<" ";
    }
    cout<<"\n";
}