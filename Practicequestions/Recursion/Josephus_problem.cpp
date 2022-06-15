
#include<bits/stdc++.h>

using namespace std;
int solve( vector<int> &v,int k,int start,int &ans)
{
    if(v.size()==1) 
    {
    ans=v[0];
    return ans;
    }
    // v.erase(v.begin()+k);
    // start=start+k; //here we have done % v.size() because it will be case that start will go out of vector size which will give segmentation fault
    // k=start+k;
    // if(start>v.size())
    // {
    //      start=(start)%(v.size()); 
         
    // }
    // if(k>v.size())
    //      {
    //         k=k%(v.size());
    //      }
    start=(start+k)%(v.size());
    v.erase(v.begin()+start);
    
    
   solve(v,k,start,ans);
   return 0;

}
int main()
{
   int N,k;
   cin >> N ;
   vector<int> v;
   //v.size()=N;
   for(int i=0;i<N;i++)
   {
    int x;
    cin>>x;
    v.push_back(x);

   }
   cin>>k;
   int ans=-1;
   int x=solve(v,k,0,ans);
   cout<<x;
   return 0;
   
   
}