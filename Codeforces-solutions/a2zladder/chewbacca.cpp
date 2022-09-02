//https://codeforces.com/contest/514/problem/A
//Naive Idea : Here is extracting the bits of a number and checking if (9- that bit) is less than original number and replacing it eith smaller number otherwise no replacement
#include<bits/stdc++.h>
using namespace std;

int main()
{
   

  string str;
  cin>>str;
  int firstchar=str[0]-'0';
  if(firstchar==9)
  {
    str[0]='9';
  }
  else{
    //firstcharacter is not 9
    if(firstchar>4)
    {
        str[0]=(9-firstchar)+'0';
    }
  }
  for(int i=1;i<str.size();i++)
  {
      int valint=str[i]-'0';
      if(valint>4)
      {
        str[i]=(9-valint)+'0';
      }
  }

cout<<str;
   

    return 0;
}
 // int x,num;
    // cin>>x;
    // stringstream ss; 
    // string str= to_string(x);
   
    // string str;
    // cin>>str;
    // for(int i=0;i<str.length();i++)
    // {
        
    // }
    // // ss<<str;
    // // ss>>num;
    // // cout<<num;
     //cout<<str;