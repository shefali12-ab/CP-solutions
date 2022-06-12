#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int N, X;
        cin >> N >> X;
        if (N < 6)
        {
            cout << X << endl;
        }
        if (N >= 6 && N % 6 == 0)
        {
            cout << ((N / 6) * X) << endl;
        }
        if (N >= 6 && N % 6 != 0)
        {
            cout << (((N / 6) + 1) * X) << endl;
        }
    }
    return 0;
}
