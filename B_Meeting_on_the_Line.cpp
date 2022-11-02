//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,index;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
         for(int i=0;i<n;i++)
        {
            cin>>v2[i];
        }
        int max = *max_element(v2.begin(),v2.end());
        for(int i=0;i<n;i++)
        {
            if(v2[i]==max){
                index=i;
                break;
            }
        }
        int ans1=v1[index];//this will tell person taking maximum time
        sort(v1.begin(),v1.end());
        
        int mid = (v1[0]+v1[n-1])/2;
        //ans can be ans1 or mid we need to check 

    }
}