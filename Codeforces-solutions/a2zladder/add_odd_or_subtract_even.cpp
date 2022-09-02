#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        if(a>b)
        {

           if((a-b)%2)
           {
              cout<<2<<endl;
           }
           else{
            cout<<1<<endl;
           }

        }
        else if(a<b)
        {
            if((b-a)%2)
           {
              cout<<1<<endl;
           }
           else{
            cout<<2<<endl;
           }
        }
    }
    return 0;
}