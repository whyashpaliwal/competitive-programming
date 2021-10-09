/*
*author: yashpaliwal
*codeforces practice problem 
*/
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
   
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;    

    if(!isPrime(m)){
        cout<<"NO"<<endl;
    }else{
        for(int i=n+1; i<=m; i++){
            if(isPrime(i)){
                if(i==m){
                    cout<<"YES"<<endl;
                    break;
                }else{
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}