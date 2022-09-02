#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //int i = 0, j = 0, row = 0, column = 0;
    int row,column;
    int a[5][5];
    for (int i = 0; i <=4; i++)
    {
        for ( int j = 1; j <=4; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                row = i;
                column = j;
            }
        }
    }
    int min_move = abs(2-row) + abs(2-column);
    // cout << min_move;
    return min_move;
}
