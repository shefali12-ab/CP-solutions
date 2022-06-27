/*Insertion sort

Here we have considered that the element at 0th index is already sorted, so we started our loop from index 1 uptill size-1 (for loop) inside this we have
value variable which contains the current index value and a hole that is current index position. using while loop we are checking the element before the current index
, if element before the current index is grater than the element at the current index then we are assigning the greater element to currentindex and shifting our hole to
hole-1. and when while loop ends or hole is at the correct position to place a value.


*/

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int> v{n};
    for(int m=0;m<n;m++)
    {
        cin>>v[m];
    }

   for(int i=1;i<=n-1;i++)
   {
    int value=v[i];
    int hole=i;
    while(hole>0&&v[hole-1]>value){
        v[hole]=v[hole-1];
        hole=hole-1;
    }
      v[hole]=value;  
    }
   
 for(int m=0;m<n;m++)
    {
        cout<<v[m];
    }



   
}