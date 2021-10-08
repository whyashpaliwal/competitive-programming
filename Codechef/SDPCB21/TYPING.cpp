#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>> T;
    while(T--){
       int N;
       cin>>N;
       string words[N];

       for(int i = 0; i < N; i++){
           string str;
           cin>>str;
           getline (cin, words[i]);
       }

        for(int i = 0; i < N; i++){
            cout<<words[i]<<endl;
       }
       
    }
    return 0;
}