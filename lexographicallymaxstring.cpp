#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="cab";
    string mx="";
    for(int i=0;i<str.length();i++)
    {
        mx=max(mx,str.substr(i));
          cout<<mx<<endl;
    }
    //cout<<mx;
}