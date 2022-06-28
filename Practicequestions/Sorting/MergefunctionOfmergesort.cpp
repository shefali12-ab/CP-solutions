/*
Here we take a single array with three points namely, the lower, the middle and the highest point. The elements from the lower to the middle are sorted and the elements from the (middle+1) to the higher are sorted. 
The task is to merge these two sorted parts into one.
 Idea 
 a[]={10,15,20,40,8,11,15}
 low=0
 mid=3
 high=6
 here we first create two array 
 left[] it will contain elements frm low to mid
 right[] it will contain elements from mid to high
 now we need to follow the same logic as that of merge two sorted array, but here we need to put the eleement in original array a[]

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,10,80};
    int low=0,mid=3,high=5;
    int Lsize=(mid-low)+1;//
    int Rsize=high-mid;
    vector<int> left{Lsize},right{Rsize};
    // int i=0,j=0;
    // while(i<Lsize){
    //     left[i]=v[i];
    //     i++;
    // }
    // while(j<Rsize){
    //     right[j]=v[i];
    //     i++;
    //     j++;
    // }
    for(int i=0;i<Lsize;i++){
        left[i]=v[i];

    }
     for(int i=0;i<Rsize;i++){
        right[i]=v[mid+i+1];
        
    }
    int Lindex=0,Rindex=0;// index pointing to left[] and right[] array
    int origindex=0;// index pointing to original array
    while(Lindex<Lsize&&Rindex<Rsize)
    {
        if(left[Lindex]<=right[Rindex]){
            v[origindex]=left[Lindex];
            origindex++;
            Lindex++;
        }
        else{
             v[origindex]=left[Rindex];
            origindex++;
            Rindex++;
        }
            
    }
    while(Lindex<left.size()){
         v[origindex]=left[Lindex];
            origindex++;
            Lindex++;
    }
       while(Rindex<right.size()){
            v[origindex]=left[Rindex];
            origindex++;
            Rindex++;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

}