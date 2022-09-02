#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,cnt=0;
  cin>>n;
  while(n--)
  {
    unordered_map<int,int>m1;
    for(int i=0;i<3;i++)
    {
        int x;
        cin>>x;
        m1[x]++;
    }
    if(m1[1]>=2) cnt++;
  }
  cout<<cnt;




    
}