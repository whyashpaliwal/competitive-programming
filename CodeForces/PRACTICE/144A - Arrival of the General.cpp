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
    cin>>n;

    //int arr[n];
    int min = INT_MAX, max=INT_MIN, temp, minIndex = 0, maxIndex = 0;   
        
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        if(i==0){
            min = temp;
            max = temp;
        }
        //cout<<"input " <<i<<" = " << temp<<endl;
        
        if(temp<=min)
        {
            min = temp;
            minIndex = i;
        }else if(temp > max)
        {
            max = temp;
            maxIndex = i;
        }
        // cout<<"at this moment, min = " <<min<<" and max = " << max<<endl;
        //arr[i] = temp;               
    }
        
    n--;
    //cout <<"min= " <<minIndex <<", max= "  << maxIndex  <<", n= " << n<<endl;
    if(maxIndex == 0 )
    {
        cout<<n-minIndex<<endl;

    }else if(minIndex == n)
    {
       cout<<maxIndex<<endl; 

    }else if(minIndex<maxIndex)
    {
        cout<<(maxIndex + (n-minIndex-1));

    }else if(maxIndex <minIndex)
    {
        cout<<(maxIndex + (n-minIndex));
    }
    return 0;
}