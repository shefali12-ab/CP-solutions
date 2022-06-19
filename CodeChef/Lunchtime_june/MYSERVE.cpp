#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int P,Q;
	    cin>>P>>Q;
	    int num=P+Q+1;
	    if(num%2==0)
	    { //even case
	        int pos=((num-2)/2)+2;
	         if(pos%2==0) cout<<"Alice"<<endl;
	        else cout<<"Bob"<<endl;
	        
	    }
	    else{
	        int pos=((num-1)/2)+2;
	        if(pos%2==0) cout<<"Alice"<<endl;
	        else cout<<"Bob"<<endl;
	    }
	}
	return 0;
}
