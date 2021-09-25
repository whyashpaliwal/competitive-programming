#include<iostream>
using namespace std;

int main(){
    int R;
    cin>>R;
    while(R--){
        int L;
        cin>>L;
        char arr[L];

        for (int i = 0; i < L; i++)
        {
            cin>>arr[i];
        }
        
        bool isValid = true;
        bool isDotsOnly = true;
        bool isHeadAppeared = false;
        bool isTailAppeared = false;

        for (int i = 0; i < L; i++)
        {
           if (arr[i] == '.')
             continue;
           
           if(!isValid)
              break;
            
           if(arr[i] == 'H'){
               isDotsOnly = false;
               if (isHeadAppeared){
                 isValid = false;
                 break;
               }
               isHeadAppeared = true;
               isTailAppeared = false;               
           } else if (arr[i] == 'T'){
               isDotsOnly = false;
               if(!isHeadAppeared){
                   isValid = false;
                   break;
               }                                    
               isTailAppeared = true;         
               isHeadAppeared = false;
           } 

        }

        //ended with tail
        if(!isDotsOnly){
            if(isValid){
                //check ended with tail 
                if(!isTailAppeared)
                  isValid = false;
            }
        }

        if(isValid)
          cout<<"Valid"<<endl;
        else
          cout<<"Invalid"<<endl;     
    }
    return 0;
}