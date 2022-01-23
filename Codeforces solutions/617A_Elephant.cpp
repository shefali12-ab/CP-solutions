#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, i;
    cin >> x;
    string str = {2, 3, 4, 5, 1};

    for (i = 0; i < str.length(); i++)
    {
        if (x % str[i] == 0)
        {
            cout << x / str[i] << endl;
            break;
        }
    }
    if (i != str.length())
    {
        cout << floor(x / 5) + 1;
    }

    return 0;
}