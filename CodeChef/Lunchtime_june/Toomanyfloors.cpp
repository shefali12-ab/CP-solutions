#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int X,Y;
	    cin>>X>>Y;
	    int chef,chefina;
	    if(X>=1 &&X<=10) chef=1;
	    else if(X>=11&&X<=20) chef=2;
	    else if(X>=21&&X<=30) chef=3;
	    else if(X>=31&&X<=40) chef=4;
	    else if(X>=41&&X<=50) chef=5;
	    else if(X>=51&&X<=60) chef=6;
	    else if(X>=61&&X<=70) chef=7;
	    else if(X>=71&&X<=80) chef=8;
	    else if(X>=81&&X<=90) chef=9;
	    else if(X>=91&&X<=100) chef=10;
	    
	    if(Y>=1 &&Y<=10) chefina=1;
	    else if(Y>=11&&Y<=20) chefina=2;
	    else if(Y>=21&&Y<=30) chefina=3;
	    else if(Y>=31&&Y<=40) chefina=4;
	    else if(Y>=41&&Y<=50) chefina=5;
	    else if(Y>=51&&Y<=60) chefina=6;
	    else if(Y>=61&&Y<=70) chefina=7;
	    else if(Y>=71&&Y<=80) chefina=8;
	    else if(Y>=81&&Y<=90) chefina=9;
	    else if(Y>=91&&Y<=100) chefina=10;
	    
	   // cout<<chef<<chefina;
	   int ans=abs(chef-chefina);
	   cout<<ans<<endl;
	}
	return 0;
}
