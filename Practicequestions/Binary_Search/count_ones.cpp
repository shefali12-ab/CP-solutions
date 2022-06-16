//Given a sorted binary array, we need to count 1s in this array.
#include<bits/stdc++.h>
using namespace std;
int main()
{   int N;
    cin>>N;
    vector<int>v;
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        v.push_back(x); // enter a sorted binary array
    }
     /*  Naive solution (2 ways)
    // idea find the index of first occurence of 1, or start from last index and count the number of ones
    //corner cases
    // there may be a case when there is only one 1 and it is present at last index
    //there may be case there is no zeroes in array and only one is there ,starting from first index
    if(v[0]==1) cout<<N;//this is case where only 1's are present in array  {1,1,1,1}
    if(v[v.size()-1]==0) cout<<0;//{0,0,0,0,0}
    if(v[v.size()-1]==1&&v[v.size()-2]==0) cout<<"1";//{0,0,0,1}
    else if(v[N-1]==1){
        //here we have checked whether last element is one and then with loop starting from second last index we checked till we get 1 and counted no of ones
        //arr[]={0,0,0,1,1,1,1} or{0,1,1,1,1,1}
        int cnt=1;
        int i=2;
        while(v[N-i]==1)
        {
            cnt++;
            i++;
        }
        cout<<cnt;

    }
    return 0;
    //Naive soln: Time complexity: in worst case {0,1,1,1,1,} O(N-1)==O(N);
    // another Naive soln : (GFG)
   
    traverse throgh the array unitll you find 1, as you find 1, then the no of ones= size of array - index of first occurence of one
    {0, 0 , 1 , 1 ,1}
    size=5
    index of first occurence of 1= 2
    no of ones = 5-2=3
    time complexity= O(log N) in worst case
    */
   // Efficient solution using Binary search O(log N)
   int low=0;
   int high=N-1;
   while(low<high)
   {
    int mid=(low+high)/2;
    if(v[mid]<1)
    {
       low=mid+1; 
    }
//     else if(v[mid]>1)
//    {
//      high=mid-1;
//    }
   else{
    // v[mid]==1 case 
    // now we need to find the first occurence
    if(mid==0||v[mid-1]!=1) {
        // we have find the first occurence
        // no of ones=size-mid
        cout<<(N-mid);
    }
    else{
        high=mid-1;
    }
   }
   }

}