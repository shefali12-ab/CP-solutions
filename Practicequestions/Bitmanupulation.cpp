// Given N integers every integer appears twice two integer appears once, print those integer
#include <iostream>
#include <map>
using namespace std;
int main()
{
    int N;
    cin >> N;
    map<int, int> m;
    for (int i = 0; i < N; i++)
    {
        int key;
        cin >> key;
        m[key]++;
    }
    for (auto &pr : m)
    {
        if (pr.second == 1)
        {
            cout << pr.first;
        }
    }

    return 0;
}
