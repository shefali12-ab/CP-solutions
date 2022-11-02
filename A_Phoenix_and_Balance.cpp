#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int totalsum= pow(2,n+1)-2;
        int val=(n/2)-1;
        // int sum=pow(2,n);
        // while(val)
        // {
        //     sum+=pow(2,val);
        //     val--;
        // }
        int pile1= pow(2,n)+(pow(2,val+1)-2);
        int pile2=totalsum-pile1;
        cout<<abs(pile1-pile2)<<endl;
    }
}