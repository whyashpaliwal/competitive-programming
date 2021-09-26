#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
ll getDigitSum(ll n)
{
    ll digSum = 0;
    while (n != 0)
    {
        digSum = digSum + n % 10;
        n = n / 10;
    }
    return digSum;
}
 
 
ll solution(ll l, ll r)
{
 
    if(l==r) {
        if(getDigitSum(l)%3 == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
 
    if (l >= r)
    {
        return 0;
    }
 
    for (int i = 0; i < 3; i++)
    {
        if (l > r) {
            return 0;
        }
        if (l <= r && l % 3 == 0) {
            break;
        }
        else {
            l++;
        }
    }
 
    for (int i = 0; i < 3; i++)
    {
        if (l <= r and r % 3 == 0)
        {
            break;
        }
        else
        {
            r--;
        }
    }
 
    ll a = l / 3;
    ll b = r / 3;
    return abs(a - b) + 1;
}
 
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        cout << solution(l, r) << endl;
    }
    return 0;
}