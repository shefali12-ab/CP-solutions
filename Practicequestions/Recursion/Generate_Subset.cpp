#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(vector<string> ip, vector<string> op)
{
    if (ip.size()==0)
    {
        for(int i=0;i<op.size();i++)
        {
         cout<<op[i];

        }
        return;
    }
    vector<string> op1 = op;
    vector<string> op2;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip, op1);
    solve(ip, op2);
    return;
}
int main()
{
    vector<string> ip;
    for(int i=0;i<ip.size();i++)
    {
        cin>>ip[i];

    }
    vector<string> op;
    solve(op, ip);
    return 0;
}
