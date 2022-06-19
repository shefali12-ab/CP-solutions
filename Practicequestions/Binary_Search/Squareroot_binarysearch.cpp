//Given an integer, we need to find floor of its square root.
/* 
Naive solution theta(sqrt(N));
idea here is will run a loop from i=1 and check i*i<=n till it became equal or greater than n.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    Naive solution
    int n,i=1;
    cin>>n;
    while(i*i<=n)
    {
         i++;
         
    }
    cout<<(i-1);
    return 0;
    */
   //solution using binary search
   /* 
   The idea of binary search is to find the mid element an checks whether its square is greater,less or equal to the our required element. basically we are removing the 
   number of iterations of loop by using binary search.
   if mid element square is greater then we shift high to mid-1
   and if mid element square is lesser then we shift low to mid +1 and store this  mid in ans variable we do this because we need to find out the last occurence of minimum value and if its equal then that's our answer.
   
   */
  int n;
  cin>>n;
  int low=1;
  int high=n;
  while(low<high)
  {
    int mid=(low+high)/2;
    if(mid*mid<n) {
        low=mid+1;
        ans=mid;
    }
    else if(mid*mid>n){
        high=mid-1;
    }
    else{
        // here mid*mid==n
        ans=mid;
        
        
    }
  }
  cout<<ans;
  return 0;
}