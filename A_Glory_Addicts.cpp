#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;cin>>n;
        vector<int>a(n),b(n);
        int cnt0=0,cnt1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(cnt0==0) cnt0++;
        }
        cnt1=n-cnt0;
        int sumb=0;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            sumb+=b[i];
        }
        if(cnt0==n || cnt1==n)
        {
            ans=sum;
        }

        if(cnt0==cnt1)
        {
            int x= *min_element(b.begin(), b.end());
            ans=2*(sum-x)+x;
        }
        else{

      vector<vector<int>> v(2);
        for(int i=0;i<n;i++)
        {
            v[a[i]].push_back(b[i]);
        }
        sort(v[0].begin(),v[0].end());
        sort(v[1].begin(),v[1].end());
        int k= cnt0>cnt1?cnt1:cnt0;
         for(int i=0;i<k;i++)
          {
            ans+=2*(v[0][i] +v[1][i]);
          }
          for(int i=k;i<n;i++)
          {
           ans+=v[0][i]+v[1][i];
          }




        }
    }
}