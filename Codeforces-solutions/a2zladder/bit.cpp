#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    string str;
    cin>>n;
    while(n--)
    {
        cin>>str;
        if(str=="++X" || str=="X++")
         x=x+1;
         else if(str=="--X" || str=="X--")
         x=x-1;
    }
    cout<<x;
    return 0;
}