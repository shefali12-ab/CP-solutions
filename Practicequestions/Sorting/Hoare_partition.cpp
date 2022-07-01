/*
Hoare Partition
It works much better then lomuto partition. here we are considering the element at 0th index as pivot element and doiing partition around this element.
we have two indexes one pointing at -1 position (just before the first element) and other pointing at high+1 tht is n (just after the last element position)
we are doing i++ initially untill we find element greater at ith idex and doing j-- untill we find smaller element at jth index then we check if i>=j then break
else we swap these two numbers.
In Hoare partition the pivot element is not at its correct position as it was in lomuto partition, but it 
requires less number of traversal as compared to lomuto partition.

*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
//vector<int> v{n};
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int i=-1;//(low-1)
int j=n;//(high+1)
int pivot=a[0];
while(true)
{
 do{
    i++;
 }while(a[i]<pivot);
 do{
    j--;
 }while(a[j]>pivot);
 if(i>=j) break;
 swap(a[i],a[j]);
 
}

for(int i=0;i<n;i++)
 {
    cout<<a[i]<<" ";
 }


}