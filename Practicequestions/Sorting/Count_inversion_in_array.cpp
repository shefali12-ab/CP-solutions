/*
Given an unsorted array,we need to count inversions.
A pair(a[i],a[j]) forms an inversion when i<j and arr[i]>arr[j];

I/P: arr[] = {2,4,1,3,5}
O/P: 3 i.e (2,1) , (4,3), (4,5)

I/P: arr[] = {10,20,30,40}
O/P : 0
when array is sorted number of inversion will always zero
I/P: arr[] = {40 ,30, 20,10}
O/P : 6
When array is reverse sorted then the number of inversions are maximum possible.
in this case first element will form (n-1),second will (n-2), third will (n-3) inversion
total inversion : (n*(n-1))/2

Naive solution:
we will run two loops ex: 
1. one for i=0 and other loop from j=i+1 upto array size and check whether arr[i]>arr[j] and count if this condition saties fies

Efficient solution:

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int> v1={40 ,30, 20,10};
/* 
Naive solution: T.C : O(n^2) A.S=O(1)

int cnt=0;
 for(int i=0;i<v1.size();i++){
    for(int j=i+1;j<v1.size();j++)
    {
        if(v1[i]>v1[j]){
            cnt++;
        }
    }
 }

cout<<cnt;
*/

}