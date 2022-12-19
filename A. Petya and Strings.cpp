#include<bits/stdc++.h>
using namespace std;
int main()
{   int ans;
    string s1,s2;
    cin>>s1>>s2;
   transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
   transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    if(s1==s2) ans=0;
    else{
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]<s2[i]) {
                ans=-1;
                break;
            }
            if(s1[i]>s2[i])
            {
                ans=1;
                break;
            }
        }
    }
    cout<<ans<<endl;
}