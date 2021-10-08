/*
*author: yashpaliwal
*codeforces practice problem 
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    string ans = "";

    for(int i=0;i<str.length();i++){
      if(str[i] == '.'){
          ans+='0';
      }else if(str[i] == '-' && str[i+1] == '.'){
          ans+='1';
          i++;
      }else if(str[i] == '-' && str[i+1] == '-'){
          ans+='2';
          i++;
      }

    }

    cout<<ans;

    return 0;
}