#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(vector<char> ip, vector<char> op)
{
    if (ip.size()==0)
    {
        for(int i=0;i<op.size();i++)
        {
         cout<<op[i]<<" ";

        }
        return;
    }
    vector<char> op1 = op;
    vector<char> op2;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip, op1);
    solve(ip, op2);
    return;
}
int main()
{   
    int N;
    cin>>N;
    vector<char> ip;
    // for(int i=0;i<N;i++)
    // {
    //     char x;
    //     cin>>x;
    //     ip.push_back(x);

    // }
    for(int i=0;i<N;i++){
    char temp;
    cin>>temp;
    ip.push_back(temp);
    
    }
    vector<char> op;
    solve(op, ip);
    return 0;
}
