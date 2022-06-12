#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int N, cnt = 0;
        cin >> N;
        string A, B;
        cin >> A >> B;
        map<char, char> m;
        // for(int i=0;i<N;i++)
        // {
        //     m[B[i]]++;
        // }
        for (int i = 0; i < N; i++)
        {
            if (B[i] != A[i])
            {
                if (m.find(B[i]) == m.end())
                {

                    m.insert(pair<char, char>(B[i], A[i]));
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
