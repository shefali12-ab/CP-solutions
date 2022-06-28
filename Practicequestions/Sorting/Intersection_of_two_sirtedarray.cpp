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

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1={1,20,20,40,60};
    vector<int> v2={2,20,20,40};
    //here v1 has large size so the outer loop will be running from 0 to v1.size()
    for(int i=0;i<v1.size();i++)
    {
        if(i>=0){
            if(i==0)
            {
                for(int j=0;j<v2.size();j++)
                {
                    if(v1[i]==v2[j]) cout<<v1[i];
                }
            }
            else if(v1[i]!=v1[i-1])
            {
                if(v2[i]!=v2[i-1])
                {
                    for(int j=0;j<v2.size();j++)
                {
                    if(v1[i]==v2[j]) cout<<v1[i];
                }
                }
                
            }
        }
    }
}