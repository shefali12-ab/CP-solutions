#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string ans;
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        if(sum==0)
        {
           cout<<"NO"<<endl;
        
        }
        else{
          cout<<"YES"<<endl;
        }
        // else if(sum==n|| k==n )
        // {
        //     ans="YES";
        // }
        // else{
        //   int val=INT_MIN;
        // for(int i=0;i<k;i++)
        // {
        //     val=max(val,v[i]);
        // }
        // for(int i=k;k<n;i++)
        // {
        //      val=min(val,v[i]);
        // }
        // if(val==0) ans="NO";
        // else ans="YES";

        // }
       
     
       //cout<<ans<<endl;

    }
}