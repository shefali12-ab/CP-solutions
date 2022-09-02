//Print a matrix in a snake pattern
/*
I/P:
1  2  3   4
5  6  7   8
9  10 11 12
13 14 15 16

O/P:
 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
*/
//Time Complexity: Theta(row * column)

#include<bits/stdc++.h>
using namespace std;
int main()
{
//creating a vector
// int m,n;
// cin>>m>>n;//column,rows
vector<vector<int>> arr;
arr={{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16} };
// for(int i=0;i<m;i++)
// {
//     vector<int> v;
//     for(int j=0;j<n;j++)
//     {
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     arr.push_back(v);
//  }
  //now we have to print this in snake pattern
  //for even indexed array it should be printed left to right
  // for odd indexed array it should be printed right to left
 for(int i=0;i<4;i++)
 {
    if(i%2==0)
    {
       for(int j=0;j<4;j++)
       cout<<arr[i][j] <<" ";



    }
    else{
  for(int j=3;j>=0;j--)
    cout<<arr[i][j]<<" ";
  
    }
  }


}