#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int cntOne = 0, cntTwo = 0, cntThree = 0;
    string s;
    cin >> s;
    int lengthOfString = s.size();
    for (int i = 0; i < lengthOfString; i = i + 2)
    {
        if (s[i] == '1')
        {
            cntOne++;
        }
        if (s[i] == '2')
        {
            cntTwo++;
        }
        if (s[i] == '3')
        {
            cntThree++;
        }
    }
    for (int i = 0; i < lengthOfString; i++)
    {

        if (i % 2 != 0)
        {
            cout << "+";
        }

        else if (i <= cntOne && i % 2 == 0)
        {
            cout << "1";
        }
        else if (i > cntOne && i <= cntTwo && i % 2 == 0)
        {
            cout << "2";
        }
        else if (i > cntTwo && i <= cntThree && i % 2 == 0)
        {
            cout << "3";
        }
    }
    return 0;
}