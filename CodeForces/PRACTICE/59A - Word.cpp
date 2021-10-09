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
    int temp;
    int capsCount =0;
    for(int i=0; i<str.length();i++){
        temp = (int)str[i];
        
        if(temp<=90){
            capsCount++;
        }
    }

    if(capsCount>(str.length()/2))
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    else 
        transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout<<str;        

    return 0;
}