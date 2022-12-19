#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
       long long  int n;cin>>n;
        vector<long long int>v(n);
         long long int pos=0,neg=0;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        //cout<<abs(sum)<<endl;
        for(int i=0;i<n;i++)
        {
            if(v[i]>=0)
            {
                pos+=v[i];
            }
            else
            {
                neg+=v[i];
            }
        }
        if(abs(neg)>=pos)
        {
            cout<<abs(neg)-pos<<endl;
        }
        else if(abs(neg)<pos){
           cout<<pos-abs(neg)<<endl;
        }
        else if(pos==0) cout<<abs(neg)<<endl;
        else cout<<pos<<endl;
    }
}