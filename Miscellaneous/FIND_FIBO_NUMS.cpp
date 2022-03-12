/*
*author: yashpaliwal
*submission: 
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool can_re()

int main()
{
   int n;
   cin>>n;

// table to store values
    // of subproblems
    int count[n + 1];
    count[0] = 0;
 
    // Fill the table upto value n
    for (int i = 1; i <= n; i++) {
 
        // recurrence relation
        if (i > m)
            count[i] = count[i - 1] + count[i - m];
 
        // base cases and for i = m = 1
        else if (i < m || i == 1)
            count[i] = 1;
 
        // i = = m
        else
            count[i] = 2;
    }
 
    // required number of ways
    return count[n];

   

    return 0;
}