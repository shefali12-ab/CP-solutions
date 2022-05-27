#include <iostream>
using namespace std;
int main()
{
    int t, cnt = 0;
    cin >> t;
    while (t--)
    {
        int N, count = 0;
        cin >> N;
        string str;
        for (i = 0; i < N; i++)
        {
            getline(cin, str[i]);
        }
        for (int i = 0; i < N; i++)
        {
            int j = i;
            while (str[j] == str[i])
                j++;
            )
            if((j-1)%2==0)
            {
                cnt = cnt + j / 2;
            }
            else
            {
                cnt = (j + 1) / 2;
            }
            cout << cnt;
        }
    }
