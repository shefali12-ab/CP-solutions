#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        unordered_map<int,int> m;
        //arr[100];
        int n,c;
        int min_cost=0;
        cin>>n>>c;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
          cin>>v[i];
          m[v[i]]++;
        }
        // for(int i=0;i<v.size();i++)
        // {
        //     int x=v[i];
        //     arr[x] ++;
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(m.find(v[i])!=m.end()){
        //         m[v[i]]++;
        //     }
        //     else{
        //         m[v[i]]=1;
        //     }
        // }
        
        for(auto x: m)
        {
          if(x.second  <=c) min_cost+= x.second;
          else min_cost+=c;
        }
        cout<<min_cost<<endl;

    }
    return 0;
}