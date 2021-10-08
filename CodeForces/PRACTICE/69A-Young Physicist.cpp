/*
*author: yashpaliwal
*codeforces practice problem 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int xi=0, yi=0, zi=0;
    for(int i=  0; i<n; i++){
        int x, y, z;
        cin>>x>>y>>z;
        xi+=x;
        yi+=y;
        zi+=z;
    }

    if(xi==0 &&yi==0&&zi==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}