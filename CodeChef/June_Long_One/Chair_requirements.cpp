#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        if (X > Y)
            cout << (X - Y) << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}
