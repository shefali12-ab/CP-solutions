//Given an sorted array and element x count the occurences of given elemnt in a sorted array
// arr[]={1 10 10 20 20 20 40}, element =20
// output = 3
// There are three approach to solve this problem
/* Naive soln O(N)
lineary search the element and count if element is present.
worst case happen when {10,10,10,10} all the element of array is same as the required element.

//Second soln
Using Binary search we will search the element and if element is present at mid the we check the presence of element at right and left side of mid.
It take O(logN +k) time and in worst case k=N so T.C is O(logN +N) in worst case.

//Third soln (Efficient soln) O(log N)
 we will first call first occurence function which will return the index of first occurence of element and if element is not present it will return -1;
 if first occurence return -1, it means element is not present so return 0;
 other wise 
 make a call to last_occurence function that will return index of last occurence
 ans = last_occurence_index - first_occurence_index +1; this soln will take O(log N ) time

solution:
int count_occurences( vector<int> v, int element)
{
    int first = first_occurence(v,element);
    if(first==-1) return 0;
    else 
    return(last_occurence(v,element)-first+1);
}


*/
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
    cout<<"O";
    return 0;

}