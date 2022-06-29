/*
Given two sorted arrays our task is to find intersection or common elements of both the array, both the arrays might contain duplicate we need should print
it only once.
I/p:
a[]={3,5,10,10,10,15,15,20}
b[]={5,10,10,15,30}

O/P: {5,10,15}

if two arrays doesnot have common elements then our output will be empty.


Naive solution:
we will traverse through every element of array a and we look for same element in b --> print if same. here we need to handle duplicates also.
Timecomplexity of this soln : O(mxn), where m and n are the size of the array.
Auxilary space:O(1)

Efficent solution:
Idea: We are going to use merge function of merge sort, we will traverse through 

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* vector<int> v1={1,20,20,20,40,60};
    vector<int> v2={2,20,20,40,60};
    //here v1 has large size so the outer loop will be running from 0 to v1.size()
    for(int i=0;i<v1.size();i++)
    {  //here we also need to check duplicates
        if(i>=0){
            if(i==0) //for i==0 ,i-1 will be out of index so we will not check i-1
            {
                for(int j=0;j<v2.size();j++)
                {
                    if(v1[i]==v2[j]) cout<<v1[i];
                }
            }
            else if(v1[i]!=v1[i-1])// here i>0 so we need to check for duplicates, if duplicate is not there then we proceed
            {
                
                
                    for(int j=0;j<v2.size();j++)
                {   
                     if(j==0) //for array v2 also we need to check the duplicate, but for j==0 ,j-1 will be out of index so will not check for this case
                     {

                        if(v1[i]==v2[j]) cout<<v1[i];
                     }
                     else if(v2[j]!=v2[j-1])// here for j>0 we need to check duplicate is present or not, if not then proceed 
                     {
                        if(v1[i]==v2[j]) cout<<v1[i];
                     }

                    
                }
                
                
            }
        }
    }
    */
   /*
   ********* simpler code for naive solution ***********
 
     vector<int> v1={1,20,20,20,40,60};
    vector<int> v2={2,20,20,40,60};
for(int i=0;i<v1.size();i++)
{
    if(i>0&&v1[i]==v1[i-1]) continue;// here if we find the duplicate then we will continue means again go above in for loop --> i++;
    for(int j=0;j<v2.size();j++)
    {
      if(v1[i]==v2[j]) {
        cout<<v1[i];
        break;//as soon as we find the element in 2nd array we will break, this will reduce the chance that if duplicate is present then it won't be checked again
      }
    }
    
}
   
   */
  //Effiecient solution
   vector<int> v1={1,20,20,20,40,60};
    vector<int> v2={2,20,20,40,60};
    int i=0,j=0;
    while(i<v1.size()&& j<v2.size()) // we comw out of the loop if any of array range is reached
    {
        if(i>0 && v1[i-1]==v1[i]) 
        { 
        i++;
        continue;
        }
    
        
            if(v1[i]<v2[j]) //here the element in v1 is smaler than the element in v2 ,it means since array is sortrd it will be(element at current index in v1) smaller than all the elements of v2
            {
              i++;
            }
            else if(v1[i]>v2[j])// here the element in v2 is smaller than the element in v1,since array is sorted it menas all the element of v2 will be smaller
            {
             j++;
            }
            else//v1[i]==v2[j]
            {
                 cout<<v1[i];
                 i++;
                 j++;
            }
        
    }
 

}