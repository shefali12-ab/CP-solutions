#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    //cout<<"\n"<<"answerss";
    string s1="";
    for(int i=0;i<50;i++)
   {
        s1+="Yes";
     }
    //req(s1);
   
    while(t--)
    {
        string s;
        cin>>s;
        size_t found=s1.find(s);
        if(found!=string::npos)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}