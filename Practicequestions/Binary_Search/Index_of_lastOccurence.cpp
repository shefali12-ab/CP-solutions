//Given a sorted array and a number X we need to find the Index of last occurence of X in the sorted array. So our sorted array might contains duplicates we need to find the
//index of first occurence of number, and if given element is not present we need to return -1.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,element;
    cin>>N>>element;
    vector<int> v;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int low=0;
    int high=N-1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(v[mid]<element) low=mid+1;
        else if(v[mid]>element) high=mid-1;
        else{
            //here v[mid]==element
            if(mid==N-1||v[mid+1]!=v[mid]) {
            cout<<mid;
            return}
            else low=mid+1;
        }
    }
    return -1;
}
