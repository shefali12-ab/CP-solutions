#include<bits/stdc++.h>
using namespace std;
bool printS(int i,int *arr,vector<int>v,int n,int sum,int k)
{
//base
    if(i==n)
    {
        //condition stisfied
        if(sum==k)
        {
            for(auto x:v) cout<<x <<" ";
            cout<<endl;
            return true;
        }
        else return false;
    }
    //pick
    v.push_back(arr[i]);
    sum+=arr[i];
    if(printS(i+1,arr,v,n,sum,k)==true) return true;
    //not pick
    v.pop_back();
    sum-=arr[i];
    if(printS(i+1,arr,v,n,sum,k)==true) return true;

    return false;
}
int main()
{
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>v;
    int sum=0;
    printS(0,arr,v,n,sum,k);
    return 0;
}