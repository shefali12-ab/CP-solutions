#include<bits/stdc++.h>
using namespace std;
void rotate( int a[][2])
{
    int x,y,z;
    x=a[0][0];
    a[0][0]=a[1][0];
    y=a[0][1];
    a[0][1]=x;
    z=a[1][1];
    a[1][1]=y;
    a[1][0]=z;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int arr[2][2];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
        }
        int flag=0;
        //check for beautiful array
        if(arr[0][0]<arr[0][1] && arr[1][0]<arr[1][1] && arr[0][0]<arr[1][0] &&arr[0][1]<arr[1][1]){
            cout<<"YES"<<endl;
            //continue;
        }
        else{
          for(int i=0;i<3;i++)
          {
            rotate(arr);
            if(arr[0][0]<arr[0][1] && arr[1][0]<arr[1][1] && arr[0][0]<arr[1][0] &&arr[0][1]<arr[1][1]){
            flag=1;
            break;
             }

          }
          if(flag==1) cout<<"YES"<<endl;
          else{
            cout<<"NO"<<endl;
          }

        }
       

    }
}