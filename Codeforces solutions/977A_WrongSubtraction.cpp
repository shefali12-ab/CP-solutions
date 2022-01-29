#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k; // n is a number from which Tanya will subtract and k is nuumber of subtractions
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 != 0)
        {
            n=n-1;

        }
        else
        {
            n = n / 10;

        }
    }
    cout << n;
    return 0;
}
