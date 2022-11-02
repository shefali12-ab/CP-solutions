#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //vector<int>v(n);
    int c1=0,c2=0,c3=0,c4=0,count=0;
    
    for(int i=0;i<n;i++)
    {
       int t;
       cin>>t;
       if(t==1) c1++;
       if(t==2) c2++;
       if(t==3) c3++;
       if(t==4) c4++;
        
     
    }
   
   count+=c4;
   if(c3>c1)
   {
    count+=c1;
    c3=c3-c1;
    c1=0;

   }
   else if(c3<=c1)
   {
    count+=c3;
    c1=c1-c3;
    c3=0;
   }
   if(c3>0) {
    count+=c3;
   c3=0;
   }
if(c2>0)
{
    count+=c2/2;
    c2=c2%2;
}
//now if there are left 1 or 2
int left=c1+2*c2;
if(left<=4 && left>0) count+=1;
else if(left%4!=0){
    count+=(left/4) +1;
}
else{
    count+=left/4;
}
cout<<count<<endl;
    
}