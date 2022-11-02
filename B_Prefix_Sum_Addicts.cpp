#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,maxdam=0;cin>>n;
        //map<int,int>mp;//two count number of zeroes and ones
        vector<int>a,b;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
            //mp[x]++;
        }
         for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
         }
        // int zero=mp[0];//count of zero
        // int one=mp[1];//count of one
        int zero=0,one=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0) zero++;
            else if(a[i]==1) one++;
        }
        if(zero==0 || one==0 )
        {
           for(int i=0;i<n;i++)
           {
            maxdam+=a[i];
           }
        }
        else if(zero==one)
        {
            //In this case alternate arangement 
        }

    }
}