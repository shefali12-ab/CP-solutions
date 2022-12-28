#include<bits/stdc++.h>
using namespace std;
void findcombination(int index,vector<vector<int>> &ans,int cnt,int n,int k, vector<int> &arr,vector<int>ds )  
{
   
    
        if(cnt==k)
        {
            ans.push_back(ds);
            return;
        }
        else  return;
    
    ds.push_back(arr[index]);
    cnt=cnt+1;
    findcombination(index+1,ans,cnt,n,k-1,arr,ds);
    ds.pop_back();
    cnt+cnt-1;
    findcombination(index+1,ans,cnt,n,k,arr,ds);
}  
int main()
{
    int n,k;cin>>n>>k;
     vector<int> v;
      vector<vector<int>>ans;
        vector<int> v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        } 
        
        vector<int>ds;
        findcombination(0,ans,0,n,k,v,ds);
        return ans;

}