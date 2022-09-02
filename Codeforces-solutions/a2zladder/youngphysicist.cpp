
#include<<bits/stdc++.h>
using namespace std;
int main()
{

    int n,sumX=0,sumY=0,sumZ=0;
    cin>>n;
    while(n--)
    {
        
       int xi ,yi, zi;
       cin>>xi>>yi>>zi;
       sumX=sumX+xi;
       sumY=sumY+yi;
       sumZ=sumZ+zi;
    }
    if(sumX==0&&sumY==0&&sumZ==0) cout<<"YES";
    else cout<<"NO";
}