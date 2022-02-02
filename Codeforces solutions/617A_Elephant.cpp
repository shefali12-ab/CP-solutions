#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, ans = 0;
    cin >> x;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 4; i >= 0; i--)
    {
        ans = ans + x / arr[i];
        x = x % arr[i];
    }
    cout << ans;

    return 0;
}