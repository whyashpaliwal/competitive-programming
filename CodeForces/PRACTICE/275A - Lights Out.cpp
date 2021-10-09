/*
*author: yashpaliwal
*codeforces practice problem 
*/
#include<bits/stdc++.h>

using namespace std;

int main(){

    int input;
    vector< vector< bool > > led( 5, vector<bool>( 5, true ) );

    //process
    for(int r=1; r<=3;r++){
        for(int c=1; c<=3;c++){
            cin>>input;            
            
            if(input%2 == 0){
                continue;
            }             
            
            led[r][c] = !led[r][c];
            
            led[r][c- 1] = !led[r][c- 1];;
            led[r][c + 1] = !led[r][c + 1];
            led[r + 1][c] = !led[r + 1][c]; 
            led[r - 1][c] = !led[r - 1][c];

        }
    }

    //using printf for fast exec
    for(int r=1; r<=3;r++){
        for(int c=1; c<=3;c++){     
            if(led[r][c])
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
    
    return 0;
}