#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    for(int sp=0;sp<4;sp++)
    {
        for(int ep=sp;ep<4;ep++)
        {
           // cout<< sp <<"\t"<<ep<<endl;
           for(int k=sp;k<=ep;k++)
           {
            cout<<arr[k] <<" ";
           }
           cout<<endl;
        }
        
    }
}