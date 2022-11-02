#include<bits/stdc++.h>
using namespace std;
char get (int x)
{
    return 'a'+ x-1;
}
int main()
{
    int t; cin>>t;
    // unordered_map<int,char> m;
    // //1-26,a-z
    // char val='a';
    // for(int i='1';i<=26;i++)
    // {
    //    m[i]=val;
    //    val++;
    // }
    while(t--)
    {
        int n;//length of code
        cin>>n;
        string str;
        string s;
        cin>>s;
        int i=n-1;
        while(i>=0)
        {
           if(s[i]!='0')
           {
            str+=get(s[i]-'0');
            i--;
           }
           else{
            //sinle digit
            //int x1 =(s[i-1]-'0')+10 *(s[i-2]-'0');
            str+=get(stoi(s.substr(i-2,2)));
            i-=3;
           
           }
        }
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }
}