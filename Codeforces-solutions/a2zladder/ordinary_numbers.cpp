#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  unordered_map<int,int>m;
  while(t--)
  {
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i<10) cnt++; //single digit number will be always ordinary
        else{
            while(i!=0)
            {
               int val=i%10;
               m[val]++;
               i=i/10;
            }
            if(m.size()>1) cnt++;
            //since map doesnot allow duplicates so if all digits remains same this means map size will be 1 otherwise if mapsize is not 1 then then the number is ordinary 
        }
    
    }
    cout<<cnt<<endl;
    



  }




    return 0;
}