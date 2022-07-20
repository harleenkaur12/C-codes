#include<iostream>
#include<math.h>
using namespace std;
struct persons{
    string name;
    int date;
    float month;
    float year;
    float age;
};

persons p1, p2, p3;



int main(){
    cout<<"Enter your name "<<endl;
    cin>>p1.name;
    cout<<"Enter your month (first) "<<endl;
    cin>>p1.month;
    cout<<"Enter your year "<<endl;
    cin>>p1.year;
    p1.age=p1.year+(p1.month/12);

    cout<<"Enter your name (second)"<<endl;
    cin>>p2.name;
    cout<<"Enter your month "<<endl;
    cin>>p2.month;
    cout<<"Enter your year "<<endl;
    cin>>p2.year;
    p2.age=p2.year+(p2.month/12);

    cout<<"Enter your name (third) "<<endl;
    cin>>p3.name;
    cout<<"Enter your month "<<endl;
    cin>>p3.month;
    cout<<"Enter your year "<<endl;
    cin>>p3.year;
    p3.age=p3.year+(p3.month/12);

    if(p1.age > p2.age){
        if(p1.age>p3.age){
            cout<<"p1 is the eldest"<<endl;
        }
        

    }
    else{
        if(p2.age>p3.age){
            cout<<"p2 is the oldest"<<endl;
        }
        else{
            cout<<"p3 is the oldest"<<endl;
        }

    }




   
    


    
    return 0;
}