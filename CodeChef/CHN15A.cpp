#include <iostream>
using namespace std;
int main()
{
    int T, noOfwolvefrine = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, K;
        cin >> N >> K;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            if ((arr[i] + K) % 7 == 0)
            {
                noOfwolvefrine++;
            }
        }
    }
    cout << noOfwolvefrine;
    return 0;
}