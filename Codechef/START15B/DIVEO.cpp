/*
*author: yashpaliwal
*cc start15b 
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
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int n2 = n;

        if (a < 0 && b < 0)
        {
            if (n % 2 == 0)
            {
                cout << a << endl;
            }
            else
            {
                cout << b << endl;
            }
        }
        else
        {
            // else {
            unordered_map<int, int> m;

            while (n % 2 == 0)
            {
                m[2]++;
                n = n / 2;
            }

            for (int i = 3; i <= sqrt(n); i = i + 2)
            {
                while (n % i == 0)
                {
                    m[i]++;
                    n = n / i;
                }
            }

            if (n > 2)
            {
                m[n]++;
            }

            int ans = 0;
            for (auto i : m)
            {
                if (i.first % 2 == 0)
                {
                    int num = i.first;
                    int times = i.second;
                    if (a < 0)
                    {
                        num = pow(i.first, i.second);
                        times = 1;
                    }
                    ans += (a * times);
                }
                else
                {
                    int num = i.first;
                    int times = i.second;
                    if (b < 0)
                    {
                        num = pow(i.first, i.second);
                        times = 1;
                    }
                    ans += (b * times);
                }
                //cout<<i.first<<" "<<i.second<<endl;
            }
            if (ans < 0)
            {
                if (n2 % 2 == 0)
                {
                    if (ans > a)
                    {
                        cout << ans << endl;
                    }
                    else
                    {
                        cout << a << endl;
                    }
                }
                else
                {
                    if (ans > b)
                    {
                        cout << ans << endl;
                    }
                    else
                    {
                        cout << b << endl;
                    }
                }
            }
            else
            {
                cout << ans << endl;
            }
        }
    }

    return 0;
}