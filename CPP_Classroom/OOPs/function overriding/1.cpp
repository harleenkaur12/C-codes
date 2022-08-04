#include<iostream>
using namespace std;
class base{
    public:
    int b=10;
    void show(){
        cout<<"Show base class "<<endl;
        cout<<"b= "<<b<<endl;
    }
};
class Derived:public base{
    public:
    int d=11;
    void show(){
        cout<<"Show derived class "<<endl;
        cout<<"b= "<<b<<"d= "<<d<<endl;
    }
};
int main(){
    base b1;
    b1.show();
    Derived d;
    d.show();
    base*b=new Derived;   //d must be accessible but since we dont have d in base it cant be
    b->show();
    // Derived * d1=new base;
    // d1.show();
    return 0;
}