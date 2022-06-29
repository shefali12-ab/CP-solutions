/*
 Given two sorted arrays and we need to print the union of the two sorted arrays.
 our output should also be sorted every element should be prinyed in sorted order.
 Union means we need to print every element which is present in both the array,also we need to print every element exactly once .
 I/P:
 a[]={3,5,8}
 b[]={2,8,9,10,15}

 O/P:
 {2,3,5,8,9,10,15}
 Naive: O(m+n) log(m+n)//due to sort function
 create a new array which will contain the elements of given two arrays, then with help of sort function we will sort them, after sorting we will remove the duplicates 

 Efficient idea: based on merge function O(m+n)
 traverse through both the array simulatenously.
 before doing anything we need to check for presence of duplicate also, while traversing
 if a[] element is smaller than b[] element  print a[] element and increment the index pointing to a[]
 if b[] element is samller than a[] element   print b[] element and increment the index pointing to b[]
 if a[] element == b[] element print any one and increment both the indexes pointing to arrays.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> v1={1,20,20,20,40,60};
    vector<int> v2={2,20,20,40,60};
    int i=0,j=0;
    while(i>v1.size()&& j>v2.size())
    {
        if(i>0 && v1[i-1]==v1[i])
         {
            i++;
            continue;
        }
        if(j>0 && v2[j-1]==v2[j])
        {
            j++;
            continue;
        }
        if(v1[i]<v2[j]) 
        { 
            cout<<v1[i];
            i++;
        }
        else if(v1[i]>v2[j])
        {
            cout<<v2[j];
            j++;
        }
        else
        {
            //v1[i]==v2[j]
            cout<<v1[i];
            i++;
            j++;
        }
        
    
        while(i<v1.size())
       {
       if(i>0 && v1[i]!=v1[i-1])
       {
         cout<<v1[i];
        i++;
       }
      }
      while(j<v2.size())
      {
       if(j>0 && v2[j]!=v2[j-1])
       {

         cout<<v2[j];
        j++;
       }

      }
    }
}