#include<bits/stdc++.h>
using namespace std;
void print( int cnt1)
{
    if(cnt1==5) return;
    cout<<"Shefali"<<" ";
    cnt1++;
    print(cnt1);
}
int main()
{
    int cnt=0;
    print(cnt);
}