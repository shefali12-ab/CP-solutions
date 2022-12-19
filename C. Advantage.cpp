#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        //we need to find first maximum and second maximum
        vector<int>v2=v1;
        sort(v2.begin(),v2.end());
        int max1=v2[v2.size()-1];
        int max2=v2[v2.size()-2];
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=max1)
            {
                cout<<v1[i]-max1<<" ";
            }
            else{
                cout<<v1[i]-max2<<" ";
            }
        }
        cout<<"\n";
        

    }
}