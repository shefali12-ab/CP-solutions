#include<bits/stdc++.h>
using namespace std;
int summation(int sum,int i,int n)
{
    if(i>n)
    {
        //cout<<sum;
        return sum;
    }
    summation(sum+i,i+1,n);
}
int main()
{
    int N;cin>>N;
    int ans= summation(0,1,N);
    cout<<ans;
}