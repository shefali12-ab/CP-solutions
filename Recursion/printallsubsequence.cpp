#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &v,int *arr,int index,int size)
{
     if(index>=size)
     {
        for(auto x : v)
        {
          cout<< x <<" ";
        }
        
         if(v.size()==0)
     {
        cout<<"{}"<<" ";
        
     }
     cout<<endl;
        return;
     }
    
    v.push_back(arr[index]);//take
     print(v,arr,index+1,size);
     v.pop_back(); //do not take
     print(v,arr,index+1,size);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> v;
    print(v,arr,0,n);
}