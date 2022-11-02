#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        unordered_map<int,char>mp;
        vector<int>v(n);
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        cin>>s;
        for(int i=0;i<n;i++)
        {
            mp[v[i]]=s[i];
        }
        int i;
        for(i=0;i<n;i++)
        {
            if(mp[v[i]]!=s[i]){
                break;
            }
        }
        if(i==n)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}