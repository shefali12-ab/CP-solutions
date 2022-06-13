#include <iostream>
using namespace std;
void solve(int N, int s, int h, int d)
{
    if (N == 1)
        cout << "Move" cout << N cout << "from" cout << s cout << "to" cout << d;
    return;
    solve(N - 1, s, h, d);
}
void main()
{
    int N;
    cin >> N;
    int s = 1, h = 2, d = 3;
    solve(N, s, h, d);
}