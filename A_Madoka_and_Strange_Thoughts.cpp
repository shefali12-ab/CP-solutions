#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b)
{
    int res=max(a,b);
    while(true)
    {
        if(res%a==0 &&res%b==0) return res;
        res++;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
       // vector<int> v1,v2;
        // for(int i=1;i<=n;i++)
        // {
        //     v1.push_back(i);

        // }
        // v2=v1;
        int cnt=0;
        for(int a=1;a<=n;a++)
        {
             for(int b=1;b<=n;b++)
             {
                int val= lcm(a,b);
                if((val*val)<=(3*a*b)) cnt++;
             }
        }
        cout<<cnt<<endl;
    }
}