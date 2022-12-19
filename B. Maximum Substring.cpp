#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
     //cin.tie(nullptr)->ios_base::sync_with_stdio(false);
    int t;cin>>t;
     while(t--)
    {
         
        int n;cin>>n;
        string s; cin>>s;
          

        int cnt1=0;
         int cnt0=0;
        for(int i=0;i<n;++i)
        {
            //cin>>s[i];
            if(s[i]=='1') cnt1++;
            else cnt0++;
        }
        int ans=cnt1*cnt0;//this is the case when we will consider whole string
        //now we need to check for continous 1 or 0
        int cnt=1;
        for( int i=0;i<=n;++i)
        {
            if(s[i]==s[i-1])
            {
                cnt++;
            }
            else{
                ans=max(ans,cnt*cnt);
                cnt=1;
            }
        }
         ans=max(ans,cnt*cnt);
        cout<<ans<<endl;
        
    }
    return 0;
}
