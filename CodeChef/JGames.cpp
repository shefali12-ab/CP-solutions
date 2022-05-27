#include <iostream>
#include <std/bitsc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        if (X % 2 == 0)
        {
            if (Y % 2 != 0)
                cout << "JAY" << endl;
            else
                cout << "JANMANSH" << endl;
        }
        else
        {
            if (Y % 2 != 0)
                cout << "JANMANSH" << endl;
            else
                cout << "JAY" << endl;
        }
    }
    return 0;
}