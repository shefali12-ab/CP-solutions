#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i = 0, j = 0, row = 0, column = 0;
    int a[i][j];
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                row = i;
                column = j;
            }
        }
    }
    int min_move = abs(row - 3) + abs(column - 3);
    cout << min_move;
    return 0;
}
