#include<bits/stdc++.h>
using namespace std;
void print( int x,int n)
{
    if(x>n) return;
    cout<< x<<" ";
    x++;
    print(x,n);
}
int main()
{
    int N; cin>>N;
    int i=1;
    print(i,N);
}