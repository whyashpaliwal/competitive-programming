#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	  int D,L,R;
	  cin>>D>>L>>R;
	  if(D<L){
	    cout<<"Too Early"<<endl;
	  } else if(D>R){
	    cout<<"Too Late"<<endl;
	  } else{
	    cout<<"Take second dose now"<<endl;
	  }
	  
	}
	return 0;
}
