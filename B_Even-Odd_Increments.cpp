#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
      int n,q;
      cin>>n>>q;
      vector<int> v(n);
       long long int sum1=0;
       int cntevn=0;//count of even number present in array.
      for(int i=0;i<n;i++)
      {
        cin>>v[i];
        sum1+=v[i];
        if(v[i]%2==0)
        {
          cntevn++;
        }
       
      }
      int cntod=n-cntevn;
     
    
    while(q--)
      {
         int type,x;
         cin>>type>>x;
         long long int sum=0;
         if(type==0)
         { //adding x to all even numbers
          if(x%2)
          {
                 //x is odd wala case
                sum1+=x*cntevn;
               //sum1+=x*cntevn;
               cntevn=0;
               cntod=n;
          }
          else{
            // x is even wala case
             sum1+=x*cntevn;
             //sum1+=x*cntevn;
             
            


          }

         }
         if(type==1)
         {
          //adding x to all odd numbers
           if(x%2)
          {
                 //x is odd wala case
                 sum1+=x*cntod;
                 cntod=0;
                 cntevn=n;
                // sum1+=x*cntod;

          }
          else{
            // x is even wala case
              sum1+=x*cntod;
             // sum1+=x*cntod;

          }
         }
       cout<<sum1<<"\n";
        
      }
        //cout<<"\n";
    

    }
}
/*
 for(int i=0;i<n;i++)
        {
            if(x==0 ){
                if(v[i]%2==0){ // element is even
                    sum+=(v[i]+y);
                    v[i]=v[i]+y;
                }
                else sum+=v[i];
            }
            if(x==1){
                if(v[i]%2!=0){
                    //element is odd
                    sum+=(v[i]+y);
                    v[i]=v[i]+y;
                }
                else sum+=v[i];
            }
        } 
        cout<<sum<<"\n";
*/