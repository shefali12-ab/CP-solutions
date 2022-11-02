#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        // time to reach floor 1 when first elevator is at a , is abs(a-1)
        //time to reach floor 1 when second elvator is at b and will go to first c then 1 is abs(b-c)+abs(c-1)
        int elv1=abs(a-1);
        int elv2=abs(b-c)+abs(c-1);
        if(elv1<elv2) cout<<"1"<<endl;
        else if(elv1>elv2) cout<<"2"<<endl;
        else cout<<"3"<<endl;
    }
}