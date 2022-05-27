#include <iostream>
using namespace std;
int main()
{
    int tc, cnt_zero = 0, cnt_two = 0;
    while (tc--)
    {
        int N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            if (arr[i] == 0)
            {
                cnt_zero++;
            }
            else if (arr[i] == 2)
            {
                cnt_two++;
            }
        }
        int zeroPair = (cnt_zero * (cnt_zero - 1)) / 2;
        int twoPair = (cnt_two * (cnt_two - 1)) / 2;
        cout << zeroPair + twoPair;
    }

    return 0;
}