/*
*author: yashpaliwal
*submission: snckql21
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define nl cout<<endl

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    fast; //fast execution for cp
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        vector <pair<int, int>> arrB;        
        int temp;
        //making pair 
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            arrB.push_back(make_pair(temp,i));
        }

        ///////////////////////////////////////////////
        // cout<<"before sort \n";
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<"("<<arrB[i].first <<", "<<arrB[i].second<<")"<< "\t";
        // }
        ///////////////////////////////////////////////

        //sorting wrt to input
        sort(arrB.begin(), arrB.end());

        ///////////////////////////////////////////////
        // nl;
        // cout<<"after sorting by first \n";
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<"("<<arrB[i].first <<", "<<arrB[i].second<<")"<< "\t";
        // }
        ///////////////////////////////////////////////

        temp = 0;
        for(int i=0; i< n; i++){

            if(arrB[i].first > temp){
                arrB[i].first = temp;
                temp++;
            }else if(arrB[i].first == temp){
                arrB[i].first = temp;
            }
        }

        ///////////////////////////////////////////////
        // nl;
        // cout<<"after replacing element \n";
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<"("<<arrB[i].first <<", "<<arrB[i].second<<")"<< "\t";
        // }
        ///////////////////////////////////////////////

        //now we need to rearrange the element to original place as we sorted array B wrt input 
        //sorting wrt to index we stored initially
        sort(arrB.begin(), arrB.end(), sortbysec);


        ///////////////////////////////////////////////
        // nl;
        // cout<<"after sorting by second \n";
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<"("<<arrB[i].first <<", "<<arrB[i].second<<")"<< "\t";
        // }
        ///////////////////////////////////////////////
        
        //printng ans
        for (int i = 0; i < n; i++)
        {
            // cout<<arrB[i] + i <<" ";
            cout<<arrB[i].first <<" ";
        }

        nl;
    }
 
    return 0;
}







/*

Test ans
-------------
A 1 2 0
B 2 3 1
R 1 2 0 
DE>>3

before sort 
(2, 0)  (3, 1)  (1, 2)
after sorting by first 
(1, 2)  (2, 0)  (3, 1)
after replacing element 
(0, 2)  (1, 0)  (2, 1)
after sorting by second 
(1, 0)  (2, 1)  (0, 2)

-------------

A 0 1
B 1 1 
R 0 0 
DE>>1

before sort 
(1, 0)  (1, 1)
after sorting by first
(1, 0)  (1, 1)
after replacing element
(0, 0)  (1, 1)
after sorting by second
(0, 0)  (1, 1)
------------

A 0 1 2 3 2 1 
B 1 2 3 3 2 1
R 0 1 2 0 0 0 
DE>> 3

before sort 
(1, 0)  (2, 1)  (3, 2)  (3, 3)  (2, 4)  (1, 5)
after sorting by first
(1, 0)  (1, 5)  (2, 1)  (2, 4)  (3, 2)  (3, 3)
after replacing element
(0, 0)  (1, 5)  (1, 1)  (2, 4)  (2, 2)  (3, 3)
after sorting by second
(0, 0)  (1, 1)  (2, 2)  (3, 3)  (2, 4)  (1, 5)
*/
