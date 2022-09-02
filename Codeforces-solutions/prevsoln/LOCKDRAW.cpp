#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C, T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B >> C;

        if (A == (B + C) || B == (A + C) || C == (A + B))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}