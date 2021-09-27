#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll p, a, b, c, x, y;
        cin >> p >> a >> b >> c >> x >> y;

        ll anarCount = p / (b + (a * x));
        ll chakriCount = p / (c + (a * y));

        if (anarCount > chakriCount)
        {
            cout << anarCount<<endl;
        }
        else
        {
            cout << chakriCount<<endl;
        }
    }
}