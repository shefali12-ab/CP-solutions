#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s1;
        cin>>s1;
        unordered_map<char,int> mp;
        mp['a']=1;
        mp['b']=2;
        mp['c']=3;
        mp['d']=4;
        mp['e']=5;
        mp[' f' ]=6;
        mp[ 'g' ]=7;
        mp[ 'h' ]=8;
        mp[ 'i' ]=9;
        mp[ 'j' ]=10;
         mp[ 'k' ]=11;
          mp[ 'l ']=12;
           mp[ 'm' ]=13;
            mp[ 'n' ]=14;
             mp[ 'o ']=15;
              mp[ 'p']=16;
               mp[ 'q ']=17;
                mp[ 'r']=18;
                 mp[ 's']=19;
                  mp[ 't ']=20;
                   mp[ 'u ']=21;
                    mp[ 'v ']=22;
                     mp[ 'w ']=23;
                      mp[ 'x ']=24;
                       mp[ 'y ']=25;
                        mp[ 'z ']=26;
        vector<int> v1;
        for(int i=0;i<s1.size();i++)
        {
            v1.push_back(mp[s1[i]]);
        }
        sort(v1.begin(),v.end());
        cout<<v1[s1.size()-1] <<endl;
    }
}