#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int t;cin>>t;
    // while(t--)
    // {
    //     int n,m;
    //     cin>>n>>m;
    //     vector<int>x(m),y(m);
    //     for(int i=0;i<m;i++)
    //     {
    //         cin>>x[i];
    //         cin>>y[i];
    //     }
    //     if(m<n)
       
    //     else if(m>=n){
    //         cout<<"NO"<<endl;
    //     }
       
    // }
    int x,y,z;
    x=2;
    y=5;
   z= x+++y;
   printf("%d%d%d",x,y,z);
    
}
/*else if(m==n)
        {
            cout<<"NO"<<endl;

        }
        else{
            int i;
            for(i=0;i<m;i++)
            {
              int x1=  x[i];
              int y1= y[i];
                std::vector<int>::iterator it;
              it = std::find(x.begin(),x.end(),x1);
              if(it==x.end())
              {
                //it means no rook is presnt in that row and we can move
                cout<<"YES"<<endl;
                break;
              }
                std::vector<int>::iterator it1;
              it1=std::find(y.begin(),y.end(),y1);
              if(it1==y.end())
              {
                cout<<"YES"<<endl;
                break;
              }
            }
            if(i==m)
            {
               cout<<"NO"<<endl; 
            }
        }*/