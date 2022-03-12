/*
*author: yashpaliwal
*submission: codeforces practice
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
    

int main()
{
    fast; //fast execution for cp

    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    if(k==1 || l == 1 || m == 1 || n == 1 ){
        cout<<d<<endl;
    }else if(k>d && l>d && m>d && n>d){
        cout<<0<<endl;   
    }    
    else{
        int count = 0;
        for (int i = 1; i <= d; i++)
        {
            /* code */
            if(i%k==0 || i%l==0 || i%m==0 || i%n==0) {
                count++;
            }
        }
        
            t<<count<<endl;

    }

 
 
    return 0;
}