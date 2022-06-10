#include <iostream>
using namespace std;
bool ispalindrome(string &str, int start, int end)
{
    if (start >= end)
        return true;

    return (str[start] == str[end] && ispalindrome(str, start + 1, end - 1));
}
int main()
{
    string str;
    cin >> str;
    ispalindrome(str, 0, str.size() - 1);
    return 0;
}