#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
     unordered_map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int sum=0;
          for(int i=0;i<s.size()&&i>=0;i++)  
            
        {
            if(i==s.size()-1)
            {
                // char x=s[i]
                // int val1=m[x];
                sum=sum+m[s[i]];
                break;
                
              
            }
             char x=s[i],y=s[i+1];
             int val1=m[x],val2=m[y];
            
            if(val1>=val2) sum=sum+val1;
            else sum=sum-val1;
        
        }
        cout<<sum;
}