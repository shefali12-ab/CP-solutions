// check if array is sorted or not
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << "not sorted";
            return 0;
        }
    }
    cout << "array is sorted";

    return 0;
}
