#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        int final1,final2,remain1,remain2;
        // int finalplayer1=max(s1,s2);
        // int remain1=min(s1,s2);
        // int finalplayer2=max(s3,s4);
        // int remain2=min(s3,s4);
        if(s1>s2) final1=s1;
        else final1=s2;
        remain1=s1+s2-final1;
        if(s3>s4) final2=s3;
        else final2=s4;
        remain2=s3+s4-final2;
        
        if(final1>=remain2 && final2>=remain1 )
        {
             cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}