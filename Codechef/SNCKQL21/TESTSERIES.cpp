/*
*author: yashpaliwal
*submission: codechef snckql21
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
    while(t--){

        int result = 0;
        int india_wins = 0, england_wins = 0, draw_count = 0;

        for (int i = 0; i < 5; i++)
        {
            cin >> result;
            if (result == 0)
                draw_count++;
            else if (result == 1)
                india_wins++;
            else if (result == 2)
                england_wins++;
        }     

        if(india_wins > england_wins)
          cout<<"INDIA\n";
        else if(england_wins > india_wins)
          cout<<"ENGLAND\n";
        else  
          cout<<"DRAW\n";
          
    }

 
 
    return 0;
}