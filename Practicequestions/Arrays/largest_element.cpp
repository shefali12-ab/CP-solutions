// Largest element of array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    int N;
    cin >> N;
    int arr[N];
    int max = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        // int x;
        // cin >> x;
        // push_back(x);
        cin >> arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    cout << max;
    return 0;
}