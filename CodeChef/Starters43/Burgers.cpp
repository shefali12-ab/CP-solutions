#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int A,B;
	    cin>>A>>B;
	    if(A==B)cout<<A<<endl;
	    else if(A>B) cout<<B<<endl;
	    else cout<<A<<endl;
	}
	return 0;
}
