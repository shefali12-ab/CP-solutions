#include <iostream>
using namespace std;
int main()
{
    int n, sumxi = 0, sumyi = 0, sumzi = 0;
    cin >> n;
    while (n--)
    {
        int xi, yi, zi;
        cin >> xi >> yi >> zi;
        sumxi = sumxi + xi;

        sumyi = sumyi + yi;

        sumzi = sumzi + zi;
    }
    // cout << sumxi << " " << sumyi << " " << sumzi;
    if (sumxi == 0 && sumyi == 0 && sumzi == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
