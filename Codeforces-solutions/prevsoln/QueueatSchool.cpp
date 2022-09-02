#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;
    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G')
            {
                str[i] = 'G';
                str[i + 1] = 'B';
                i = i + 1;
            }
        }
    }
    cout << str;

    return 0;
}
