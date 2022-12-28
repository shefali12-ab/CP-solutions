#include<bits/stdc++.h>
using namespace std;
void print(int index,int *arr,vector<int> &v,int N,int sum,int k)
{
   //Base
    if(index==N)
    {
        if(sum==k)
        {
            for( auto x:v) cout<<x<<" ";
            cout<<endl;
        }
        
        return;
    }
    //hypotheseis
    //pick
    v.push_back(arr[index]);
    sum+=arr[index];
    print(index+1,arr,v,N,sum,k);
    //not pick
    v.pop_back();
    sum-=arr[index];
    print(index+1,arr,v,N,sum,k);

}
int main()
{
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> v;
    int sum=0;
    print(0,arr,v,n,sum,k);//index ,original array,emptyvector,size of original array,sum variable, k(sum needed)
}