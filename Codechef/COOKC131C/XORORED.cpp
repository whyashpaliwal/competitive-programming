#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	  int n;
	  cin>>n;
	  
	  int arr[n], temp, firstElement;
  
	  cin>>firstElement;
    arr[0] = 0;
	  for (int i = 1; i < n; i++) {
	    /* code */
	    cin>>temp;
	    arr[i] = (temp ^ firstElement);
	  }
	  
	  int ans = 0;
	  for (int i = 0; i < n; i++) {
	    /* code */
	    ans = ans | arr[i];
	  }
	 
	 cout<< firstElement << " " << ans;
	  
	}
	
	return 0;
}
