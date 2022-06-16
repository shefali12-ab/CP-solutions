#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    string s;
	    cin>>s;
	    
	    
	    for(int i=0;i<N;i++)
	    
	    { 
	        if(s[i]=='0'){
	            if(s[i+1]=='1') cout<<"T";
	            else if(s[i+1]=='0') cout<<"A";
	            
	        }
	        else if(s[i]=='1'){
	            if(s[i+1]=='0') cout<<"C";
	            else if(s[i+1]=='1') cout<<"G";
	        }
	        
	        
	        i=i+1;
	    }
	    cout<<endl;
	}
	return 0;
}