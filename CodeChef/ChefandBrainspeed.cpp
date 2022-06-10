#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int total_rupees = (5 * X) + (10 * Y);
        int max_chocolate = floor((total_rupees / Z));
        cout << max_chocolate << endl;
    }
    return 0;
}
