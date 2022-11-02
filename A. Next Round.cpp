#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int t;cin>>t;
   
    
        int n,k;cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            // int x;
            // cin>>x;
            // v.push_back(x);
            cin>>v[i];
        }
        int cnt=0;
        if(v[k]!=0)cnt=k;
        
        for(int i=k;i<n;i++)
        {
            if( v[i]==v[k-1] &&v[i]!=0 )
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    
}