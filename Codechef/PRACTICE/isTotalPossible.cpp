/*
 * author: yashpaliwal
 * date: 27-Sep-2021
 * wipro exam question
 * IsSumPossible 
 * given array and total if any two value addition is = total print their index.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, target;

    cin>> n >> target;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    bool isValid = false;
    int id1 = -1;
    int id2 = -1;

    for (int i = 0; i < n-1; i++)
    {
        int first = arr[i];
        for (int j = i; j < n; j++)
        {
            /* code */
            int second = arr[j];
            if((first + second) == target){
                isValid = true;
                id1 = i;
                id2 = j;
                break;
            }
        }

        if(isValid)        
          break;
    }
    

    if(isValid)
      cout<<id1<<" "<<id2;
    else
      cout<<-1;

    return 0;

}
