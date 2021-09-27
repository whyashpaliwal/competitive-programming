#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int n,p,x,y;
	  cin>>n>>p>>x>>y;
	  int time_req=0;
	  int person;
	  
	  
	  for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (i < p)
        {

            if (temp == 0)
            {
                time_req += x;
            }
            if (temp == 1)
            {
                time_req += y;
            }
        }
    }
	  

	  cout<<time_req<<endl;
	  
	}
	
	
	return 0;
}
