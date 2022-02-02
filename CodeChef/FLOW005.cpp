#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    int arr[6] = {1, 2, 5, 10, 50, 100};

    while (tc--)
    {
        int N, ans = 0;
        cin >> N;
        for (int i = 5; i >= 0; i--)
        {

            ans = +N / arr[i];
            N = N % 100;
        }
        cout << N << endl;
    }
    return 0;
}