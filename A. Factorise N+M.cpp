#include<bits/stdc++.h>
using namespace std;
bool is_prime(int x)
{
    for(int i=2;i*i<x;i++)
    {
        if(x%i==0) return false;
    }
    return true;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(is_prime(n+2)==false)
        {
            cout<<2<<endl;
        }
        else{
      
      for(int i=3;;i++)
        {
            //if(i%2==0)skip
            if(i%2!=0)
            {
                if(is_prime(i)==true)
                {
                    if(is_prime(n+i)==false)
                    {
                        cout<<i<<endl;
                        break;
                    }
                }
            }
        }

        }
        
    }
}