#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N, M, K, cnt0 = 0, cnt1 = 0;
        cin >> N >> M >> K;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int i;
        int ans = 0;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] == 0)
            {
                break;
            }
            else if (i == M - 1)
            {
                ans = k;
            }
            else if (i == N - 1)
            {
                ans = 100;
            }
        }
        cout << ans;
    }
    return 0;
}