// Given N string and Q queries ,In each query you are given a string, print yes if string is present else print no
#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    unordered_set<string> s;
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    while (Q--)
    {
        string str1;
        cin >> str1;
        if (s.find(str1) == s.end())
        {
            cout << "No"<<endl;
        }
        else
            cout << "Yes"<<endl;
    }

}
