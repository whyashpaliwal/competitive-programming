/*
*author: yashpaliwal
*submission: 
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);


int fibo (int n)
{   
    if (n<=1)
      return n;

    //clac
    return fibo(n-1) + fibo(n-2);
}

int main()
{
    fast; //fast execution for cp


    int n;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        int ans = fibo(i);

        if (ans<=n)
            cout<<fibo(i)<<endl;
        else 
            break;
    
    }
 
    return 0;
}