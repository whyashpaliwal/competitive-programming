#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	  int n,a,b,c;
	  cin>>n>>a>>b>>c;
	  bool isValid = true;
	  
	  if(b<n){
	    isValid = false;
	  } else if ((a+c)<n) {
	    isValid = false;
	  }
	  
	  if(isValid){
	    cout<<"YES"<<endl;
	  }else {
	    cout<<"NO"<<endl;
	  }
	  
	}
	
	return 0;
}
