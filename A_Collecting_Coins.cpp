#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
       //int num_max =max(a,b,c);
       int max;
       if(a>b&&a>c) max=a;
       else if(b>c) max=b;
       else max=c;
    //    int coins=abs(max-a)+abs(max-b)+abs(max-c);
    //    if(n<3 || n) cout<<"NO"<<endl;
    //    else if((n-coins)%3==0) cout<<"YES"<<endl;
    //    else cout<<"NO"<<endl;
    int total=a+b+c+n;
    if(total%3!=0 ) cout<<"NO";
    if(n<max) cout<<"NO";
    else cout<<"YES";

    }
}