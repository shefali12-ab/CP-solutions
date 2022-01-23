#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    for (int i = 0; i < testCase; i++)
    {
        int a, b, noOfmoves = 0;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << noOfmoves << endl;
        }
        else
        {
            // while (a % b != 0)
            // {
            //     a++;
            //     noOfmoves++;
            // }
            // cout << noOfmoves << endl;
            // getting TLE while using above code at Test Case 3
        }
    }

    return 0;
}