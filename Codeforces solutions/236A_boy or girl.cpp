#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int cnt = 0, j;
    string str;
    getline(cin, str);
    int length = str.size();
    for (int i = 0; i < length; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (str[i] == str[j])
            {
                break;
            }
        }
        if (j == length)
        {
            cnt++;
        }
    }
    if (cnt % 2) //means even
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
        }
    return 0;
}
