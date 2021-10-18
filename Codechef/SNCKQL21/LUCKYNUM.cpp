/*
*author: yashpaliwal
*submission: codechef snckql21
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);


int main()
{
    fast; //fast execution for cp

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==7||b==7||c==7)
          cout<<"YES \n";
        else
          cout<<"NO \n";
    }
    
 
    return 0;
}