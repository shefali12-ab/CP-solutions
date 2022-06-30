/*
Lomuto Partition
This is another efficient than naive partiton method, which uses only one traversal of array and requires constant amount of auxilary space.

!IDEA: Time complexity: O(N), Auxilary space: O(1)
In this partition we are considering that the pivot element is present at last index
we will create two windows in input array the first window will contains element less than pivot elment and second window will contain element greater than pivot
element. we do this by having firstly , a variable i pointing to the position before 0th index and varible j pointing to element at 0th index then we run a loop from
j =0 to high-1.
if (element[j]< pivot element) then we need to increase a window of smaller elmenet by doing i++ and then swap(element[i],element[j]) and when the loop terminates
it means we have all the samller element at one side(window) and greater at other side(second window)
now to put our pivot element at last index we need to swap it with the first occourence of element greater than pivot element

Corner Cases:
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
    int pivot=v[n-1];//last index position element is pivot element
    int low=0;
    int i=low-1;
    for(int j=low;j<n-2;j++)
    {
        if(v[j]<pivot)
        {
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[n-1]);
    //index of pivot element is i+1
    cout<<(i+1);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<v[i];
    // }

}