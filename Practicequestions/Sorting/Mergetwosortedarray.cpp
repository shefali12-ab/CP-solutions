/* merge two sorted array

Naive solution:
let say one array is of size n
and other array is of size m
create a array of size (n+m)
run two loop 
in first loop copy 1st array in new array
in second loop copy 2nd array in a new array
after this sort the newly created array using sort function.

Time complexity of naive solution is O((size1+size2)log(size1+size2))
Auxilary space of naive soln : O(size1+size2)

*******************
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size1,size2;
    cin>>size1>>size2;
    vector<int> v1{size1},v2{size2};
    for(int i=0;i<size1;i++)
    {
        cin>>v1[i];
    }
     for(int i=0;i<size2;i++)
    {
        cin>>v2[i];
    }
    // creating a new array of size(size1+size2)
    vector<int> v{size1+size2};
    for(int i=0;i<(size1);i++)
    {
       v[i]=v1[i];
    }
    // for(int j=size1,i=0;j<size2;j++)
    // {
        
    //     v[size1]=v2[i];
    //     i++;
    // }
     for(int j=0;j<size2;j++)
    {
        
        v[size1+j]=v2[j];
        
    }
    sort(v.begin(),v.end());
    for(int i=0;i<(size1+size2);i++)
    {
        cout<<v[i];
    }
}

*************************

Effiecient soln:
Time complesity: theta(size1+size2)
Auxilary space: O(1)
The idea here is we are going to traverse both the array simulatneously using two index variables pointing two arrays
and we will compare the element at that indexes which one is smaller we will print that elemt and increment that index postion untill one of index reaches greater
than the range(size of arry) after this we have printed some of element in sorted order and the remaining element in one of array we remain in sorted order we need to print them.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int size1,size2;
    // cin>>size1>>size2;
    // vector<int> v1{size1},v2{size2};
    // for(int i=0;i<size1;i++)
    // {
    //     cin>>v1[i];
    // }
    //  for(int i=0;i<size2;i++)
    // {
    //     cin>>v2[i];
    // }
   vector<int> v1={1,2,3,7,8};
   vector<int> v2={4,5,6};
   int index1=0;
   int index2=0;
   //int length =v1.size()<v2.size()? v1.size() :v2.size();
   while(index1<v1.size() && index2<v2.size())
   {
    if(v1[index1]<=v2[index2]){
        cout<<v1[index1];
        index1++;
    }
    else{
       cout<<v2[index2];
       index2++;
    }
   }
 while(index1<v1.size()){
    cout<<v1[index1];
    index1++;
 }
   while(index2<v2.size()){
    cout<<v2[index2];
    index2++;
 }
}
