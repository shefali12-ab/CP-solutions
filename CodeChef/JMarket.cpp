#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, A, B, C, min1, min2;
        cin >> X >> A >> B >> C;

        if (A <= B && A <= C)
        {
            min1 = A;
            if (B <= C)
                min2 = B;
            else
                min2 = C;
        }
        else if (B <= A && B <= C)
        {
            min1 = B;
            if (A <= C)
                min2 = A;
            else
                min2 = C;
        }
        else if (C <= A && C <= B)
        {
            min1 = C;
            if (A <= B)
                min2 = A;
            else
                min2 = B;
        }
        cout << ((X - 1) * min1 + min2) << endl;
    }
    return 0;
}