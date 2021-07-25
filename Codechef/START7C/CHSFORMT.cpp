#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	  int a,b;
	  cin>>a>>b;
	  int sum= a+b;
	  if(sum<3){
	    cout<<"1\n";
	  }else if(sum<=10){
	    cout<<"2\n";
	  }else if(sum<=60){
	    cout<<"3\n";
	  }else{
	    cout<<"4\n";
	  }
	}
	return 0;
}
