#include<iostream>
using namespace std;

int main(){
    //getting number of stipes ie test cases
    int s;
    cin>>s;
    while (s--)
    {
        //len of string 
        int n;
        cin>>n;
        bool isValid = true;

        int arr[n];
        //get strip
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        //no center part
        if(n%2 == 0 || arr[0] !=1 || arr[n-1]  != 1){
            cout<<"no"<<endl;
            continue;
        }

        for (int i = 1; i < ((n+1)/2); i++){
            if(( arr[i] - arr[i-1]) != 1){
                    isValid = false;
                    break;
            }
        }

        if (!isValid){
            cout<<"no"<<endl;
            continue; 
        }

        for (int i = ((n+1)/2); i < n ; i++){
            if(( arr[i] - arr[i-1]) != -1){
                isValid = false;               
                break;
            }
        }
                                   
        if(!isValid){
            cout<<"no"<<endl;
        }else {
            cout<<"yes"<<endl; 
        }

                                      
    }
    
    return 0;
}