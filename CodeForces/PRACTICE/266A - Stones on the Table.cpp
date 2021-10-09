/*
*author: yashpaliwal
*codeforces practice problem 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int len;
    string str;
    
    cin>>len>>str;
    int count = 0;

    for(int i=0; i<len; i++){
        if(str[i] == str[i+1])
          count++;
    }

    cout<<count;
    
    return 0;
}