#include <iostream>
using namespace std;
int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] >=arr[k-1] && arr[j]>0)
        {
            count++;
        }
        else if (arr[j] < k )
        {
            break;
        }
    }
    cout << count;

    return 0;
}
