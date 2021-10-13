/*
*author: yashpaliwal
*cc start15b
*unsolved
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
    cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
        
        string s;
        cin>>s;

        unordered_map<int, int> map1;
        unordered_map<int, int> map2;
        
        for(int i =0; i < n; i++) {
            map1[i - (s[i] - 48)] += 1;
            map2[i + (s[i] - 48)] += 1;
        }
        
        int m1 = 0;
        int m2 = 0;
        
        for(auto i : map1) {
            m1 += i.second * (i.second-1)/2;
        }
        
        for(auto i : map2) {
            m2 += i.second * (i.second-1)/2;
        }
        
        cout << m1 + m2 << endl;
    }
 
    return 0;
}