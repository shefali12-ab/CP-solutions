// Given N string ,print unique string in lexographical order with their frequency
// Input: n=8 strings--> abc,def,abc,ghj,jkl,ghj,ghj,abc
#include <iostream>
#include<bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
     map<string, int> m;
    for (int i = 0; i < n; i++)
    {

        string str;
        cin >> str ;
        m[str]++;
        cout<<m[str] <<endl;
    }
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
    cout<<m.size();
    return 0;
}
