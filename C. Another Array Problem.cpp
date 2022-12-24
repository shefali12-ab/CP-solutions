#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;cin>>t;
    while(t--)
    {

      ll n,ans;cin>>n;
         //vector<int> v(n);
         ll arr[n];
     
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
          
        }
        // if(n>=4) {
        //     ans= *max_element(arr,arr+n) * n;
        // }
        // else 
        if(n==2)
        {
            cout<< max(arr[0]+arr[1],2*abs(arr[0]-arr[1])) <<endl;
            continue;
        }
        else if(n==3)
        {
            //max element at corners 
            //maxelment at middle
            //ll maxelem=*max_element(arr,arr+n);
            ans=arr[0]+arr[1]+arr[2];
            ans=max(ans,3*abs(arr[0]-arr[1]));
            ans=max(ans,3*abs(arr[1]-arr[2]));
            ans=max(ans,3*arr[0]);
            ans=max(ans,3*arr[2]);
            cout<<ans<<endl;
            continue;
        }
     //  cout<<ans<<endl;
     cout<< *max_element(arr,arr+n) * n <<endl;
        
    }
}