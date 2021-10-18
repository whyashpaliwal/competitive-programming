/*
*author: yashpaliwal
*codeforces practice problem 
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

    int n;
    cin >> n;

    double num = 0.0;
    double temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        num += temp;
    }

    double deno = n * 1.0;

    cout << (num / deno) << endl;

    return 0;
}