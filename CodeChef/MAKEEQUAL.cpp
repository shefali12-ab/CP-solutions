#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int max = 0;
        int min = arr[0];
        for (int j = 0; j < N; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
            }
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }
        cout << max - min << endl;
    }

    return 0;
}