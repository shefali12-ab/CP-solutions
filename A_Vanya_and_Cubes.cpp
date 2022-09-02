#include<bits/stdc++.h>
using namespace std;
int main()
{
int cubesgiven, heightcnt=0,level=0,cubesreq;
cin>>cubesgiven;

while(cubesreq<=cubesgiven)
{
    level++;
    cubesreq+=(level*(level+1))/2;
    // cubesreq=(level*(level+1))/2;
    // if(cubesgiven>=cubesreq)
    // {
    //     heightcnt++;
    //     cubesgiven=cubesgiven-cubesreq;
    // }
    // else{
    //     break;
    // }
}
cout<<level-1;
return 0;



}
/*

 int cubesgiven;
    cin>>cubesgiven;
    //int cubeslevel=0;
    int heightcnt=0;
    int level=1;
    int sum=0;
    //initially cubesgiven will be greater than the level
    while(sum<cubesgiven)
    {
       level++;
       sum=sum+level;
        cubesgiven=cubesgiven-level;
        //heightcnt++;
    }
    cout<< level-1;
    return 0;


*/