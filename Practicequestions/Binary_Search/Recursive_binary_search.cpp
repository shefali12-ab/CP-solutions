#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &v,int element,int low,int high){
    int mid=(low+high)/2;
    if(low>high) {return -1;}
    if(v[mid]==element){ 
        return mid;
        
    }
    
    if(v[mid]>element){
       
        // for(int i=mid;i<v.size();i++)
        // {
        //     v.erase(v.begin()+i);
        // }
        high=mid-1;
        return(solve(v,element,low,high));
    
    }
    if(v[mid]<element){
        //  for(int i=0;i<=mid;i++)
        // {
        //    low=v.size()-(mid+1);
        //    high=v.size()-high; 
        //     v.erase(v.begin()+i);
        //     solve(v,element,low,high);
            
        // }
        low=mid+1;
        return(solve(v,element,low,high));
        
        
    }

    

};
int main()
{
    vector<int> v;
    int N,element,low,high;
    cin>>N>>element;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    high=v.size()-1;
    int ans=solve(v,element,0,high);
    cout<<ans;
    return 0;
}