//Implementation of bubble sort algorithm
// T.C---O(N^2)
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
   /* for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-2;i++)
        {
            if(v[i]>v[i+1]) swap(v[i],v[i+1]);
        }
    }

    We can modify this ,In every pass we do not need to run the inner most loop uptill n-2 because in each pass array is divved in two parts that is sorted and unsoted
    In fist pass innermost loop will run uptill n-2
    In second pass innermost loop will run uptill n-3
    IN third pass innermost loop will run uptill n-4 and so on untill the array will be sorted .
    One more modification we can do is
    the array =[2  4 7 1 5 3] get sorted in 3 passes only the 4th and 5th passes were redundant so will take a variable flag set it to 0 before making any pass.
    and if any swap happend then we set its value to 1. but if no swap happens it means array is alredy sorted and we donot need to run loop futher so we will break.

    */
    for(int j=0;j<n-1;j++)
    {
        int flag=0;
        for(int i=0;i<(n-j-1);i++)
        {
            if(v[i]>v[i+1]) {
                swap(v[i],v[i+1]);
                flag=1;
            }
        }
        if(flag==0) break;
    }
     for(int i=0;i<n;i++)
    {
       cout<<v[i];
    }

}
/*
After modification In best case when array is already sorted then innermost loop will run only n times so

Best Case: O(N)
Average Case : O(N^2)
Worst Case :O(N^2)



*/