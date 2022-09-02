#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int noOfuppercase = 0, noOflowercase = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            noOfuppercase++;
        }
        else
        {
            noOflowercase++;
        }
    }
    if (noOfuppercase > noOflowercase)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    cout << str;

    return 0;
}
