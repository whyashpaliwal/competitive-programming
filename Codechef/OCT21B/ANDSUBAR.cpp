/*
*author: yashpaliwal
*codeforces practice problem 
*status: not accepted solution - WA
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

/* Works only if a >= 0 and b >= 0 */
ll cust_pow(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll answer = a;
    ll increment = a;
    ll i, j;
    for(i = 1; i < b; i++)
    {
        for(j = 1; j < a; j++)
        {
            answer += increment;
        }
        increment = answer;
    }
    return answer;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll temp = n;

        ll count = 0;
        while (n > 0)
        {
            n /= 2;
            count++;
        }

        if (cust_pow(2, count) - temp == 1)
        {
            count++;
        }

        count -= 2;

        cout << cust_pow(2, count) << endl;
    }
    
    return 0;
}