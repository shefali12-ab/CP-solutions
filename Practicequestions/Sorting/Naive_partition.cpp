/*
In naive partition algo, we are given an array and index of pivot element, we need to put element samller then pivot element on left side and element greater 
than pivot element on right side.
I/P : a[]={3,8,6,12,10,7}
pivot index: p: 5

Idea 1: Time Complexity : theta(N) S.C= theta(N)
we will create an array of same size and traverse through the given array and we will put element smaller than pivot than pivot element on left side and element 
greater than pivot element on right side.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v{n};
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
   
    
    int p;//index of pivot element
    cin>>p;
    //int pivot=v[p];//pivot element
    //creating empty vector of same size
    int x=v.size();
    vector<int> v1{x};
    //int arr1[6];
    int index=0;
    for( int i=0;i<n;i++)
    {
        if(v[i]<v[p]) {
            // v1.push_back(v[i]);pushing all the element smaller than pivot in empty vector
            v1[index]=v[i];
            index++;
        }
    }
    //pushing pivot element because all the samller element got inserted
    //v1.push_back(pivot);
    //arr1[i]=pivot;
     for(int i=0;i<n;i++)
    {
        if(v[i]==v[p]) {
           // v1.push_back(v[i]);// pushing all the element equal to pivot in half filled vector
           v1[index]=v[i];
           index++;
        }
    }
    int res=index-1;// storing the index of last occurence of pivot element
       for(int i=0;i<n;i++)
    {
        if(v[i]>v[p]) {
           // v1.push_back(v[i]);// pushing all the element greater than pivot in half filled vector
           v1[index]=v[i];
           index++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v1[i]<<" ";
    }

}