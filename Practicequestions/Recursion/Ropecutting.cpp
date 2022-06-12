#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int maxPieces(int x, int y, int count)
// {
//     if (x == 0)
//         return count;
//     if (x < 0)
//         return 0;
//     count++;
//     maxPieces(x - y, y, count);
// }
// int main()
// {
//     int N, A, B, C;
//     cin >> N >> A >> B >> C;
//     int ans = maxPieces(N - A, A, 1) + maxPieces(N - B, B, 1) + maxPieces(N - C, C, 1);
//     cout << ans;
// }
int util(int n, int a, int b, int c)
{
    if (n < a && n < b && n < c)
        return 0;
    int res = -1;
    if (n >= a)
    {
        res = max(res, util(n - a, a, b, c));
    }
    if (n >= b)
    {
        res = max(res, util(n - b, a, b, c));
    }
    if (n >= c)
    {
        res = max(res, util(n - c, a, b, c));
    }
    if (res == -1)
        return 0;
    return res + 1;
}
