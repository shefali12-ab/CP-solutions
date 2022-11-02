#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n;
  int v1[n+1];
  
  for(int i=0;i<n;i++)
  {
     int x;
     cin>>x;
     v1[x]=i+1;
  }
  long long sum1=0,sum2=0;
  cin>>m;
  while(m--)
  {
    int q;
    cin>>q;
    sum1+=v1[q];
    sum2+=n-v1[q]+1;
  }

cout<<sum1<<" "<<sum2;
return 0;

}
 