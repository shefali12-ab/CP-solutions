// Given N strings print unique string in lexographical order.
#include <iostream>
#include<set>
using namespace std;
int print_set(set<string> &s)
{
    for (auto value : s)
    {
        cout << value << endl;
    }
    return 0;
}
int main()
{
    int N;
    cin >> N;
    set<string> s1;
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        s1.insert(str);
    }
    print_set(s1);

    return 0;
}
