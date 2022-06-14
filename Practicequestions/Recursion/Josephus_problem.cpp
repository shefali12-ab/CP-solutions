#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve( vector<int> &v,int k,int start)
{
    if(v.size()==1)
    {
        cout<<v.size();
    cout<<v[0];
    return;
    }
    start=(start+k)%(v.size()); //here we have done % v.size() because it will be case that start will go out of vector size which will give segmentation fault
   cout<<"vector after reducing size";
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i];
   }
    v.erase(v.begin()+k);

   solve(v,k,start);

}
int main()
{
   int N;
   cout<<"enter size";
   cin >> N;
   vector<int> v;
   //v.size()=N;
   cout<<"enter vector";
   for(int i=0;i<N;i++)
   {
    int x;
    cin>>x;
    v.push_back(x);
   }
   cout<<"enter k";
   int k;
   cin>>k;
   k=k-1;
   solve(v,k,0);


    return 0;
}
