//START14B --> DIAGMOVE
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	  int a, b;
	  cin>>a>>b;
	  if((a+b)%2 == 0)
	    cout<<"YES\n";
	  else 
	    cout<<"NO\n";
	}
	
	return 0;
}
