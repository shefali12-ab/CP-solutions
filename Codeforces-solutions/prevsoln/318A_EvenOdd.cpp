#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    // int arr[n];

    if (n % 2 == 0)
    {
        // for (int i = 0, j = 1; i < n; i++)
        // {
        //     if (i < n / 2)
        //     {
        //         arr[i] = (2 * i + 1);
        //     }
        //     else
        //     {

        //         arr[i] = 2 * j;
        //         j++;
        //     }
        // }
        if (k <= n / 2)
        {
            cout << (long long)(2 * k - 1);
        }
        else
        {
            long long x = k - n / 2;
            cout << 2 * x;
        }
    }
    else
    {
        // for (int i = 0, j = 1; i < n; i++)
        // {
        //     if (i <= n / 2)
        //     {
        //         arr[i] = (2 * i + 1);
        //     }
        //     else
        //     {

        //         arr[i] = 2 * j;
        //         j++;
        //     }
        // }
        if (k <= n / 2 + 1)
        {
            cout << (long long)(2 * k - 1);
        }
        else
        {
            long long x = k - ((n / 2) + 1);
            cout << 2 * x;
        }
    }
    // cout << arr[k - 1];
    return 0;
}
