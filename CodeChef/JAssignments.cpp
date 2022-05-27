#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X;
        cin >> X;
        if (X + 3 <= 10)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
    return 0;
}