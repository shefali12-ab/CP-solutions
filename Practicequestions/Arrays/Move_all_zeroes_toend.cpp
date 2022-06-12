// move zeroes to end of te array keeping the order of remaining element same
//  first idea is to create an empty array/vector of same size and two loops ,in one loop we will copy nonzero elemnts and in other loop zeroes
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,cnt=0;
    cin >> N;
    vector<int> v, v1;
    // first loop for inserting elements
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if(x==0) cnt++;
    }
    // this loop is for, inserting a non zero element
    for (int i = 0; i < N; i++)
    {
        if (v[i] > 0)
            v1.push_back(v[i]);
    }
    // here since it is vector so we don't need to take care of assigning zero at end after inserting non zero element

    // in case of array we need to tke care of it, or we can also do it by initializing all elements of array as zero
      for (int i = cnt; i <= N; i++)
    {

            v1.push_back(0);
    }

    for (int j = 0; j < N; j++)
    {
        cout << v1[j];
    }
    return 0;
}
