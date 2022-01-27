#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int lengthOfString = s.size();
    for (int i = 0; i < lengthOfString; i = i + 2)
    {
        if (s[i] > s[i + 2])
        {
            swap(s[i], s[i + 2]);
        }
    }
    return 0;
}