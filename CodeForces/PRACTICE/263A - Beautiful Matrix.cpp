/*
*author: yashpaliwal
*codeforces practice problem 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int r=0, c=0;
    int val=0;
    //bool isValid = false;

    for(int i=1; i<=5;i++){

        for(int j=1; j<=5;j++){
            cin>>val;
            if(val==1){
                r=i;
                c=j;
                // isValid = true;
                // break;
            }
        }
        
        // if(isValid)
        //   break;
    }

    int ans = abs(r-3) + abs(c-3);

    cout<<ans;

    return 0;

}