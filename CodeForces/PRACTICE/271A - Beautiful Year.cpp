/*
*author: yashpaliwal
*codeforces practice problem 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int yr;
    cin>>yr;
    
    int x1,x2,x3,x4;

    while(true){
        yr++;
        
        x1 = yr/1000;
        x2 = (yr/100)%10;
        x3 = (yr/10)%10;
        x4 = (yr%10);

        if(x1!=x2 && x1!=x3 && x1!=x4 && x2!=x3 && x2!=x4 && x3!=x4){
            break;
        }
    }

    cout<<yr;
    return 0;
}