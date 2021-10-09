/*
*author: yashpaliwal
*codeforces practice problem 
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll ip;
    cin>>ip;
    
    ll temp;
    int count=0;
    while(ip){
        temp = ip%10;
        if(temp ==4||temp==7){
            count++;
        }

        ip/=10;
    }

    if(count==4||count==7||count==44||count==47||count==74||count==77){
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }

    return 0;
}