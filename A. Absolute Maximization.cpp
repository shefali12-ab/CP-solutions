#include<bits/stdc++.h>
using namespace std;
// vector<int> dectobinary(int n)
// {
//     //int binary[11];
//     vector<int> binary;
//     //int i=0;
//     while(n>0)
//     {
//         // binary[i]= n%2;
//         binary.push_back(n%2);
//         n=n/2;
//         //i++;

//     }
//     return binary;
// }
int main(){
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int x=v[0],y=v[0];
        for(int i=1;i<n;i++)
        {
            x=(x|v[i]);//gives max element
            y=(y&v[i]);//gives min element
        }
        cout<<(x-y)<<endl;

        // int max= *max_element(v.begin(),v.end());
        // int min= *min_element(v.begin(),v.end());
        // vector<int> v1= dectobinary(max);
        // vector<int> v2 = dectobinary(min);
        // //we want to make minium number 0 so for that we want all 1's in min binary representation to be replaced by 0
        // //we want to make max number (all 1's) for that we want all 0's to be replaced by 1.
        // vector<vector<int>> v1; // this will contain binary representation of all v vector;
        // for(int i=0;i<n;i++)
        // {
        //      v1.push_back( dectobinary(v[i]));
        // }
        // for(int i=0;i<v1.size();i++)
        // {
        //     if(v1[i]==0)
        //     {
        //         for(int j=0;j<v1.size();j++)
        //         {
                    
        //         }
        //     }
        // }
        // int ans=0;
        // for(int i=0;i<v1.size();i++)
        // {
        //     ans+=pow(2,i);
        // }

        // cout<<ans<<endl;

    }
}