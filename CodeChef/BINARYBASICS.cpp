#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int tc;
    // cout<<"enter test case";
    cin >> tc;
    while (tc--)
    {
        int N, K, count = 0;
        // cout<<"enter N";
        cin >> N;
        // cout<<"enter K";
        cin >> K;
        // cout<<"enter string";
        string str;
        cin >> str;
        for (int i = 0; i < N / 2; i++)
        {
            if (str[i] != str[N - 1 - i])
            {
                count++;
            }
        }
        // cout<<"count is"<<count <<endl;
        if (count > K)
        {
            cout << "NO" << endl;
        }
        else
            {
                if(N%2!=0)
                    cout << "YES";
                    else if(k-count%2==0)
                        cout << "YES";
                        else
                            cout << "NO";
                // if(N%2!=0&&K%2!=0)
                // {
                //     cout << "YES"<<endl;
                // }
                // else if(N%2==0&&(K-count)%2==0)
                // {
                //     cout << "YES"<<endl;
                // }
                // else
                //     cout << "NO"<<endl;
            }

      
    }
    return 0;
}
