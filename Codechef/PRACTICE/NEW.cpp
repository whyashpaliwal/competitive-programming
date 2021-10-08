/*
 * author: yashpaliwal
 * date: 27-Sep-2021
 * wipro exam question
 * given string 
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>> str;

    string ans = "";    

    for(int i=0; i < str.length() - 1; i++){
        char left = str.at(i);
        char right = str.at(i+1);

        // if()

        if((int)left < (int)right){
            ans += right;
        }else {
            ans += left;
        }
        
        i++;
    }

    cout<<ans;

    return 0;
}