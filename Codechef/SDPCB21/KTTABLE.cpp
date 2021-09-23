#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        //num of students
        int n;
        cin>>n;

        int intervals[n];
        int timeReq[n];
        //getting arr for time intervals  
        for (int i = 0; i < n; i++)
        {
            cin>>intervals[i];
        }
        //getting arr for time req for each student  
        for (int i = 0; i < n; i++)
        {
            cin>>timeReq[i];
        }

        //job done count
        int count = 0;
        if(intervals[0] >= timeReq[0])
          count++;
        //checking 
        for (int i = 1; i < n; i++)
        {
            int timeInterval = intervals[i] - intervals[i-1];

            if (timeInterval >= timeReq[i])
              count++;
        }   

        //output
        cout<<count<<endl;
          
    }
    

    return 0;
}