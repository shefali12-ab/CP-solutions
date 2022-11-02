#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        //total digits we have is 10
        //10-n C 2 * 6 will be our ans
        cout<<(10-n)*(9-n)*3<<endl;

    }
}