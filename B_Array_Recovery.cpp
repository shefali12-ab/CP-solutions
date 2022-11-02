#include<bits/stdc++.h>
using  namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,flag=0;cin>>n;
        vector<int>d,a;
      for(int i=0;i<n;i++)
        {
            
            int x;cin>>x;
            d.push_back(x);
        }
       
        for(int i=0;i<n;i++)
        { 
            if(i==0){
                a.push_back(d[i]);
                }
            else{
            int x1,x2;
            x1=d[i]+a[i-1];
            x2=-d[i]+a[i-1];
            if((x1>=0&&x2>=0)){
              
               if(x1==x2) {
               a.push_back(x1);
                }
                else{
                     flag=1;
                break;
                }
            }
            else if(x1>=0){
            //    a[i]=x1;
            a.push_back(x1);
            }
            else{
                //a[i]=x2;
                a.push_back(x2);
            }


            }
           
        }
        //solve(flag,a);
        if(flag==1) cout<<-1<<endl;
        else{
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

    }
}