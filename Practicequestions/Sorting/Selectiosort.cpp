/*
Selection sort algorithm
The idea of this algo is that we willfind the minimum element in the array and swap it with thw 0th index in first pass and in second pass again we will find the 
second minimum element in the array and swap it with the 2nd index .
THis algo requires theta(n^2) time complexity, it is Inplace and not stable algo.


*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v{n};
    for(int m=0;m<n;m++)
    {
        cin>>v[m];
    }

    for(int i=0;i<n-2;i++){
        int imin=i;
        for(int j=i+1;j<=n-1;j++)
        {
            if(v[j]<v[imin])
             imin=j;
        }
        swap(v[i],v[imin]);
    }
    for(int m=0;m<n;m++)
    {
        cout<<v[m];
    }

}