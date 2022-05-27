#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int N;
        cin >> N;
        int x = pow((0.143 * N), N);
        if(floor(x)<0.5)
        {
            cout << floor(x) << endl;
        }
        else
        {
             cout << floor(x)+1 << endl;
        }
       
    }

    return 0;
}