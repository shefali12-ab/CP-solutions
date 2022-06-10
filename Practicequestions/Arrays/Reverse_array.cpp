// reverse array
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

    for (int i = 0; i <N / 2; i++)
    {
         /*int x = arr[i];
         arr[i] = arr[N - 1-i];
        arr[N - 1-i] = x;*/
        swap(arr[i], arr[N - 1-i]);
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i];
    }

    return 0;
}
