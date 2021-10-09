/*
*author: yashpaliwal
*codeforces practice problem 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;

    if(str[0]>90){
        str[0] = str[0] - 32;
    }


    cout<<str;

    return 0;
}