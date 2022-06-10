#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int cnt=0;
    for (int k = 1; (2 * N) > (k*(k- 1)); k++)
    {
        int Num = N - ((k*(k- 1)) / 2);
        if (Num % k == 0)
            cnt++;
    }
    cout<<cnt;
    return 0;
}
