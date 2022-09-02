/*
Time limit: 1.00 s Memory limit: 512 MB
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).


*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 vector <int> v{n};
 for(int i=0;i<n-2;i++)
 {
    cin>>v[i];
 }
 sort(v.begin(),v.end());
 for(int i=0;i<n-2;i++)
 {
    if(v[i]!=(i+1)) {
    cout<<(i+1);
    
    break;
    }
 }



}