#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int D, C, sum1 = 0, sum2 = 0;
        cin >> D >> C;
        int charge_with = C;
        int A[3], B[3];
        for (int i = 0; i < 3; i++)
        {

            cin >> A[i];
            sum1 += A[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> B[i];
            sum2 += B[i];
        }
        //    charges without coupon
        int charge_without = 2 * D;
        // charges with coupon
        if (sum1 < 150)
        {
            charge_with = +D;
        }
        if (sum2 < 150)
        {
            charge_with = +D;
        }
        if (charge_with < charge_without) // in this case here charge with coupoun is less than charge without coupoun
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}