#include<bits/stdc++.h>
using namespace std;
int print(int *arr,int i,int n,int sum,int k)
{
    if(i==n)
    {
        if(sum==k) return 1;
        else return 0;
    }
    sum+=arr[i];
    int left = print(arr,i+1,n,sum,k);
    sum-=arr[i];
    int right = print(arr,i+1,n,sum,k);

    return left+right;

}
int main()
{
    int n,k;cin>>n>>k;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     cout<< print(arr,0,n,sum,k);
}