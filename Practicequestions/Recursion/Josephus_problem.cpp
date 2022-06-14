#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve( vector<int> v,int k,int start)
{
    if(v.size()==1) 
    {
    cout<<v[0];
    return;
    }
    start=(start+k)%(v.size()); //here we have done % v.size() because it will be case that start will go out of vector size which will give segmentation fault
    v.erase(v.begin()+k);
    
   solve(v,k,start);

}
int main()
{
   int N,k;
   cin >> N >> k;
   vector<int> v;
   //v.size()=N;
   for(int i=0;i<N;i++)
   {
    cin>>v[i];
   }
   k=k-1;
   solve(v,k,0);


    return 0;
}