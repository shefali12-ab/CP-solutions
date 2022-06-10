// sort an array using recursion
// Here we will use IBH technique of recursion
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> &v, int val)
{
    if (v.size() == 1 || val > v[v.size() - 1])
    {
        v.push_back(val);
        return;
    }
    int temp = v[v.size() - 1];
    v.pop_back();
    insert(v, temp);
    v.push_back(temp);
}
void sort_array(vector<int> &v)
{
    if (v.size() == 1)
    {
        return;
    }

    int val = v[v.size() - 1];
    v.pop_back();

    sort_array(v);
    insert(v, val);
}

int main()
{
    int N;
    cin >> N;
    vector<int> v;
    // int arr[N];
    for (int i = 0; i < N; i++)
    {
        // cin >> arr[i];
        int x;
        cin >> x;
        v.push_back(x);
    }
   sort_array(v);


    return 0;
}
