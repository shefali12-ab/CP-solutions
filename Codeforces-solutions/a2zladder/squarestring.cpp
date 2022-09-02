#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
while(n--)
{
    string str;
    cin>>str;
    int l=str.size();
    if(l%2){
     //oddcase
     cout<<"NO"<<endl;
    }
    else{
        int l1=l/2;
        int l2=str.size()-1;
        string s1=str.substr(0,l1);
        string s2=str.substr(l1,l2);
        if(s1==s2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}











    
}