#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	  double e, k;
    int fc_len=1;
	  cin>>e>>k;
	  
	  e = floor(e/k);
	  //cout<<"value of e in run "<< fc_len << "  is " << e<<endl;
	  
    while(e>=1){
          fc_len++;
          e = floor(e/k);
         // cout<<"value of e in run "<< fc_len << "  is " << e<<endl;
      }
      cout<<fc_len<<endl;
	}
	return 0;
}
