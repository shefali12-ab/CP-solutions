//Given an infinite sized array, we need to write an efficient solution to search an element, if element is present then we need to return the index of element otherwise return -1 if element is not found
/* Naive solution
traversing the array as soon as we find the element we return its index and if element prsent in array become greater then the element that we need to find we return -1;
In online coding contest the size of array will be given in millions for infinite sized array.
Time Complexity: O(position )
Auxilary Space: O(1)

*/
/* Another Solution
Time Complexity: log(position)
Hint: We get logarithmic time complexity when we divide something/number by 2 or multiply by 2
The idea of this approach is we will double the index and checks whether element at that index is greater or equal to required element. If it is greater then we will apply binary
search to search the that element


*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v; //here we are considering the infinite size array 
    int N,element;
    cin>>N>>element; // here N is infinite in online coding contest
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    if(v[0]==element) return 0;
    int i=1;
    while(v[i]<=element)
    {
        
        if(v[i]==element) {
            cout<<i;
            return 0;
        };
        i=2*i;
        
    }
    int low =(i/2)+1;
    int high=i-1;

    if(v[i]>element)
    {
   // y-->low
   // i-->high

      while(low<high)
      {
        int mid=(low+high)/2;
        if(v[mid]>element)
        {
           high=mid-1;
        }
        else if(v[mid]<element){
            low=mid+1;
        }
        else{
            cout<<mid;
            return 0;
        }
      }
      cout<<"element not present";
      return 0;
   

    }
}
// This algorithm is commonly known as unbounded binary search