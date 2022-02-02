#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, noOfodd = 0, noOfeven = 0;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 2)
        {
            noOfodd++;
        }
        else
        {
            noOfeven++;
        }
    }
    if (noOfeven > noOfodd)
    {
        cout << "READY FOR BATTLE";
    }
    else
    {
        cout << "NOT READY";
    }

    return 0;
}