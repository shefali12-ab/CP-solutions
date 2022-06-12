#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// remove duplicate from the sorted array
//  first soln- Time complexity:O(N) auxilary space: O(N)
// second soln- Time complexity:O(N) auxilary space: O(1)
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    // int temp[N];
    // temp[0] = arr[0];
    // int res = 1; // size
    // for (int i = 1; i < N; i++)
    // {
    //     if (arr[i] != temp[res - 1])
    //     {
    //         temp[res] = arr[i];
    //         res++;
    //     }
    // }
    // for (int i = 0; i < N; i++)
    // {
    //     arr[i] = temp[i];
    // }
    // cout << res;
    // second solution
    int res = 1;
    for (int i = 1; i < N; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i];
    }
    return 0;
}
