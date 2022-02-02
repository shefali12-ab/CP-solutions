#include <iostream>

using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        char id;
        cin >> id;
        switch (id)
        {
        case 'B':
        case 'b':

            cout << "BattleShip";
            break;
        case 'C':
        case 'c':
            cout << "Cruiser";
            break;
        case 'D':
        case 'd':
            cout << "Destroyer";
            break;
        case 'F':
        case 'f':
            cout << "Frigate";
            break;
        }
    }
    return 0;
}