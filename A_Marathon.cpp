#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int anscnt=0;
        // int arr[4]={a,b,c,d};
        // for(int i=0;i<4;i++)
        // {
        //     if(arr[i]>arr[0])
        //     {
        //         anscnt++;
        //     }
        // }
        if(b>a) anscnt++;
        if(c>a) anscnt++;
        if(d>a) anscnt++;
        cout<<anscnt<<endl;
    }
}