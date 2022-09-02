#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str,str1;
        cin>>str;
        string s ="";
        if(str.size()<=10) cout<<str<<endl;
        else{
            //str1=str[0]+(str.size()-3)+str[str.size()-1];
            // cout<<str[0]<<(str.size()-2)<<str[str.size()-1]<<endl;
            s+=str[0]+to_string(str.size()-2)+str[str.size()-1];
            cout<<s<<endl;
        }

     }
    // string str="Shefali";
    // string s;
    // for(int i=0;i<str.size();i++)
    // {
    //     cout<<str[i];
    // }
    // cout<<endl;
    // s='swh';
    // s=(s+'e');
    // cout<<s;
    //cout<<(str[0]);

    // string s ="Shefalifjhwjer";
    // int l =s.size();
    // cout<<s[0]<<l-2<<s[l-1];
    return 0;
}