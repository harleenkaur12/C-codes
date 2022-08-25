#include<iostream>
using namespace std;
int main(){
    struct date{
        int date;
        int month;
        int year;

    } date1, date2;
    
    cin>>date1.date;
    cin>>date1.month;
    cin>>date1.year;

    cin>>date2.date;
    cin>>date2.month;
    cin>>date2.year;

    if(date1.date==date2.date && date1.month==date2.month && date1.year==date2.year){
        cout<<"They are equal";
    }
    else{
        cout<<"They are not equal";
    }



    return 0;
}