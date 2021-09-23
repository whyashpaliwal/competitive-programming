#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	  //get n and k
    int n,k;
    cin>>n>>k;
    int arr[n];
    //getting arr
    for (int i = 0; i < n; i++) {
      /* code */
      cin>>arr[i];
    }
    
    //sorting
    sort(arr, arr + n, greater<int>());
    
    int cutoff = arr[k-1];
    int count = 0;
    for (int i = 0; i < n; i++){
      /* code */
      if(arr[i]>=cutoff){
        count++;
      }
    }
    
    cout<<count<<endl;
    
	}
	
	return 0;
}
