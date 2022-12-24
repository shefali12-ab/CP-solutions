#include<bits/stdc++.h>
using namespace std;
void print(int N)
{
    if(N==0) return;
    cout<<N<<" ";
    N--;
    print(N);
}
int main()
{
    int n;cin>>n;
    print(n);
}