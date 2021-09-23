#include <iostream>
#include<string>
using namespace std;

int main()
{
    string day_start;
    int no_of_days;

    getline(cin,day_start);
    
    cin>> no_of_days;
    
    int no_of_Sun = 0;
    int first =0;
    
    if (day_start == "mon") {
        first = 6;
    }
    if (day_start == "tue") {
        first = 5;
    }
    if (day_start == "wed") {
        first = 4;
    }
    if (day_start == "thu") {
       first = 3;
    }
    if (day_start == "fri") {
        first = 2;
    }
    if (day_start == "sat") {
        first = 1;
    }
    if (day_start == "sun") {
        first = 7;
    }

    no_of_days = no_of_days - first;

    if (no_of_days >= 0){
        no_of_Sun++;

        while(no_of_days > 0){
            no_of_days = no_of_days - 7;
            no_of_Sun++;

        }
    }    
    
    std::cout << no_of_Sun << std::endl;
    
    
    return 0;
}       