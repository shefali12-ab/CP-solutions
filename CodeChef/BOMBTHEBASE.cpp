#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, X, i;
        cin >> N >> X;
        int arr[N];
        for (int j = 0; j < N; j++)
        {
            cin >> arr[j];
        }
        for (i = N - 1; i >= 0; i--)
        {
            if (arr[i] < X)
            {
                break;
            }
        }
        if (i < 0)
        {
            cout << "0" << endl;
        }
        else
            cout << (i + 1) << endl;
    }
    return 0;
}