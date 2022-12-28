#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
   ll n;cin>>n;
   vector<int> v(n);
   ll product=1;
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
    product*=v[i];
   }
  //cout<<product;
  ll ans= 2022*((n-1+product));
   cout<< ans <<endl;
    }
//cout<< 2022*(pow(10,12)+2) ;
    
}