#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome( string &str,int i)

{
    if(i>=str.size()/2) return true;
    if(str[i]!=str[str.size()-i-1]) return false;
    checkpalindrome(str,i+1);
    //  //base
    //  if(i==j || j==i+1 && str[i]==str[j] ){
    //     cout<< "true";
    //     return ;
    //  }

    //  //hypotheseis
    //  if(str[i]!=str[j]) {
    //     cout<<"false";
    //     return ;
    //  }
    //  //induction
    //  checkpalindrome( str,i+1,j-1);
}
int main()
{
    int n;cin>>n;
    string s;
    cin>>s;
    cout<< checkpalindrome(s,0);
    // if(x==1) cout<<"true";
    // else cout<<"false";
   //cout<<ans;
}