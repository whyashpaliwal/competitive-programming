#include <bits/stdc++.h>
#define ll long long int
using namespace std;


bool primeFactors(int a, int b)
{
    //checking for 2
    while (a % 2 == 0)
    {        
        if ( b%2 != 0){
            return false;
        }

        a = a/2;
    }
 
    //checking for 3 to n
    for (int i = 3; i <= sqrt(a); i = i + 2)
    {
        while (a % i == 0)
        {
            if ( b%i != 0){
                return false;
            }
            a = a/i;
           
        }
    }

    if (a > 2 && b%a != 0)
        return false;
    
    return true;
}
 

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a >>b;

        bool ans = primeFactors(a, b);

        if (ans)
            cout<<"YES"<<endl;
        else 
          cout <<"NO"<<endl;


     }

     return 0;
}