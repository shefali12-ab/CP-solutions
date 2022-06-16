//Given an sorted array and element x count the occurences of given elemnt in a sorted array
// arr[]={1 10 10 20 20 20 40}, element =20
// output = 3
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
        if(v[mid]>element){
            high=mid-1;

        }
        else if(v[mid]<element)
        {
            low=mid+1;
        }
        else{
            // element is present at mid
            int cnt=1;
            
            while(v[mid-1]==element){
                //checking presence of same element at left side of mid
                cnt++;
                mid=mid-1;
                if(mid==0) {
                    //checking if mid reach at 0th index and if elment at 0th index is equal to the required element
                    v[mid]==element;
                    cnt++;
                    break;
                    }
            }
            while(v[mid+1]==element)
            {
                //checking presence of same element at right side of mid
                cnt++;
                mid=mid+1;
                if(mid==N-1){
                    //checking if mid reach at last index and element at last index equal to required element
                    v[mid]==element;
                    cnt++;
                    break;
                }
            }
            cout<<cnt;
            return 0;

        }
    }
    // if element is not present 
    cout<<"-1";
    return 0;

}