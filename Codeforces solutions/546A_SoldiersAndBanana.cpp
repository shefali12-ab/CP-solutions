#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int costOfFirstBanana, initialDollar, noOfbanana; // k,n,w
    cin >> costOfFirstBanana >> initialDollar >> noOfbanana;
    int x = costOfFirstBanana * ((noOfbanana * (noOfbanana + 1)) / 2); // here x is number of dollars he needed
    if (x < initialDollar)
    {
        x = 0;
        cout << x;
    }
    else
    {
        cout << x - initialDollar;
    }

    return 0;
}