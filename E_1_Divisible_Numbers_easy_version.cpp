#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
     int a,b,c,d;
     cin>>a>>b>>c>>d;
    // set <int>s;
     vector<int>v1,v2;
     for(int i=a+1;i<=c;i++){
        v1.push_back(i);
     }
      for(int i=b+1;i<=d;i++){
        v2.push_back(i);
       // s.insert(i);
     }
     //a*b=v[i]*y;
     //int i;
     int x=0,y=0;
     //int flag=0;
     for( int i=0;i<v1.size();i++)
     {
        
       for(int j=0;j<v2.size();j++)
       {
         if((v1[i]*v2[j])%(a*b)==0)
         {
            x=v1[i];
            y=v2[j];
             // cout<< x<<" "<<y<<endl;
           //flag=1;
            break;
         }


       }
       //if(flag==1) break;
     
     }
   if(x!=0 && y!=0)
   {
      cout<<x<<" "<<y<<endl;
   }
   else{
      cout<<-1<<" "<<-1<<endl;
   }
   //  else{
   //    cout<< x<<" "<<y<<endl;
   //  }
    

    }
}