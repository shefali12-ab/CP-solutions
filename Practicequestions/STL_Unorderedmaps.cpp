// Given N strings and Q queries. In each query you are given a string print frequency of that string.

// N≤10^6, |S|≤100,Q≤10^6.
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        m[str]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s1;
        cin >> s1;
        cout < m[s1];
    }

    return 0;
}