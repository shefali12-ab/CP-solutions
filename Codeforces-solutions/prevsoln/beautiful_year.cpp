#include <iostream>
#include <string>
using namespace std;
int main()
{
    int X;
    cin >> X;
    string str = to_string(X);
    cout<<str;

        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < str.size(); j++)
            {
                if (i ==(str.size() - 1)  && j == (i + 1) )
                {
                    cout << str;
                    break;
                }
                else if (str[i] == str[j])
                {
                    X = X + 1;
                    str = to_string(X);

                }
            }
        }

    return 0;
}


