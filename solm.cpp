#include<bits/stdc++.h>
#include<iostream>
using namespace std;
public class Recursion{
    static int cnt=0;
    public static void main(string[] args)
    {
        if(cnt<3){
            cnt++;
            main(null);
        }
        else{
            return;
        }
    }
    cout<<cnt;
}