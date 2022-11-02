#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int max=INT16_MIN;
    for(int sp=0;sp<4;sp++)
    {
        for(int ep=sp;ep<4;ep++)
        {
           // cout<< sp <<"\t"<<ep<<endl;
            int sum=0;
           for(int k=sp;k<=ep;k++)
           {
            //cout<<arr[k] <<" ";
            sum+=arr[k];
           }
           //cout<<endl;
           if(max<sum) max=sum;
        }
        
    }
    cout<<max;
}