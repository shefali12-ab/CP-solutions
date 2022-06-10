#include <iostream>
using namespace std;
void reverse(string &str, int start, int end)
{
    if (start == end)
    {
        cout << str[start];
        return;
    }
    reverse(str, start + 1, end);
    cout << str[start];
}
int main()
{
    string str;
    cin >> str;
    reverse(str, 0, str.size() - 1);
    return 0;
}