//Given a sorted array and a number X we need to find the Index of first occurence of X in the sorted array. So our sorted array might contains duplicates we need to find the
//index of first occurence of number, and if given element is not present we need to return -1.

/* 
i/p : arr[]={1,10,10,10,20,20,40}
x=20
o/p: 4



*/ //Naive soln O(N) :- traverse the array as soon as you find the the element return its index, in worst case element is not present

/* Recursive Binary search :Time complexity O(log N), A.S:- O(log N)
this question can be done usig recursive binary search but it takes O(log N) auxilary space so beter soln is iterative approach 

Iterative Binary Search : T.C: O(log N) A.S: O(1)


*/
#include<bits/stdc++.h>
using namespace std;
// int firstO(vector<int> &v,int size,int element,int low,int high,int mid)
// {
    
//     while(low<high){
//         int mid=(low+high)/2;
//     if(v[mid]==element)
//     {
//         // this is one way of checking first occurence 
//         /*while(v[mid-1]==element)
//         {
//             mid=mid-1;
//             // here we also need to take care that mid won't reach out of array size example in case of arr[]={10,10,10} here first occurence is at 0th index so we need 
//             // to take care mid won't reach out of this index
//             if(mid==0) break;
//         }
//         cout<<mid; */
//         // another way of checking first occurence
//         if(mid==0||v[mid-1]!=v[mid]) return mid;
//         else high =mid-1;
//         return 0;
//     }
//     if(v[mid]<element){
//         low=mid+1;

//     }
//     else if(v[mid]>element)
//     {
//       high=mid-1;
//     }
//     // else {
//     //     if(mid==0||v[mid-1]!=v[mid]) return mid;
//     //     else high =(mid-1);
         
//     // }
//     }
//   return -1;  

// }
int main()
{
    //Naive solution
    /* Traverse through the array an as soon as you find the element return its index and if did not find the element return -1
      Time complexity: O(N) in the worst case element will not be present and we have to traverse the whole array.
      Ausilary space : O(1).
    */
   // solution using binary search (logN solution)
   int N,element;
   cin>>N>>element;
   vector<int> v;
   for(int i=0;i<N;i++)
   {
 int x;
 cin>>x;
 v.push_back(x);
   }
   int low=0;
   int high=N-1;
     while(low<high){
        int mid=(low+high)/2;
    
    if(v[mid]<element){
        low=mid+1;

    }
    else if(v[mid]>element)
    {
      high=mid-1;
    }
    else{
         if(mid==0||v[mid-1]!=v[mid]) return mid;
        else high =mid-1;
        
    }
     }
   
   
   return -1;

}