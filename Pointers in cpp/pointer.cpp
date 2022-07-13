#include<iostream>
using namespace std;
int main(){
    int firstvalue = 5, secondvalue = 15;
    char thirdvalue = 'a';
    int *p1=&firstvalue;
    int *p2=&secondvalue;
    char *p3=&thirdvalue;
    *p1=10;
    *p2=*p1; //value pointed by p1 is equal to value pointed by p2
    cout<<firstvalue<<endl<<secondvalue<<endl;
    
    cout<<p1<<endl<<p2<<endl;
    p1=p2;//value of pointer is copied
    cout<<p1<<endl<<p2<<endl;
    *p1=20;
    *p3='c';
    cout<<"First value is "<<firstvalue<<endl;
    cout<<"Second value is "<<secondvalue<<endl;
    cout<<"Third value is "<<thirdvalue<<endl;
    
    return 0;
}