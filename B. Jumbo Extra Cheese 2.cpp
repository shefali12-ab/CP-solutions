#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<pair<long long int,long long int>> v;
        for(int i=0;i<n;i++)
        {
            long long int a,b;cin>>a>>b;
            if(b>a)
            {
                swap(a,b);
            }
            v.push_back({a,b});
        //    v[i].first=a;
        //    v[i].second=b;
        }
        long long int sum=0;
        long long int amax=INT16_MIN;
        for(int i=0;i<n;i++)
        {
          amax=max(amax,v[i].first);
          sum+=v[i].second;
        }
        cout<<2*(sum+amax)<<endl;
       
    }
}