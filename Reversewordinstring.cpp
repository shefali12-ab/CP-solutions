

#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
      // int i=0,j=s.size()-1;
        while(s[i]==' ')
        {
            s.erase(s[i]);
            i++;
        }
        while(s[j]==' ')
        {
            s.erase(s[j]);
            j--;
        }
        for(int k=i;k<s.size();k++)
        {
            if(s[k]==' ' && s[k+1]==' ')
            {
                s.erase(s[k]);
            }
        }
         int start=0;
       
        for(int end=0;end<s.size();end++)
        {
            if(s[end]==' ')
            {
                reverse(s.begin()+start,s.begin()+(end));
                 start=end+1;
            }
           
        }
        reverse(s.begin()+start,s.end());
        reverse(s.begin(),s.end());
        return s;
}

int main()
{   
    string s=" the sky is blue";
    reverseWords(s);
    cout<<s<<endl;
}