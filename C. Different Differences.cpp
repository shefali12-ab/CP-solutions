#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int k,n;cin>>k>>n;
      // cout<<"1"<<" ";
       int diff=1;
       int j=1;
       for(int i=1;i<=k;i++)
       {
        // diff++;
        cout<<j<<" ";
         if(n-(j+diff) >=k-i-1)
         {
            j=j+diff;
            diff++;
         }
         else{
            j++;
         }
       }
       cout<<"\n";
    }
}