#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int Kth_symbol(int N, int K)
{
    if (N == 1 && K == 1)
        return 0;
    int mid = pow(2, N - 1) / 2 ;
    if (K <= mid) return (Kth_symbol(N - 1, K));
    else // k>mid
        return !(Kth_symbol(N - 1, K - mid));
}
int main()
{
    int N, K;
    cin >> N >> K;
    int ans=Kth_symbol(N, K);
    cout<<ans;

}
