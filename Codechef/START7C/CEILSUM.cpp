#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	cin>>t;
	while(t--){
	  double a,b;
  	double x=0;
  	int ans;
	  cin>>a>>b;
	  int diff;
	  diff = b-a;
	  if(diff != 0){
	    if((diff%2) == 0)  {
	      ans = ceil(diff/2)+1;
	    }else{
	      ans = ceil((double)diff/2);
	    }
	  }
	  cout<<ans<<endl;
	}
	return 0;
}
