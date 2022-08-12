#include<iostream>
using namespace std;
class Base{
    public:
    int b;
    virtual void show(){
        cout<<"show()Base class\n";
        cout<<"b="<<b<<"\n";

    }
};

class Derived:public Base{
    public:
    int d;
    void show(){
        cout<<"show()Derived class\n";
        cout<<"b="<<b<<"\n" <<"d="<<d<<"\n";
    }
};
int main(int argc, char const *argv[])
{
    Base*bptr;
    Base baseObj;
    bptr=&baseObj;
    bptr->b=10;
    cout<<"right now base class pointer pointing to base class object\"n";
    bptr->show();
    Derived derivedObj;
    bptr->b=90;
    //bptr->d=90;//not allowed

cout<<"right now base class pointer pointing to derived class object\"n";
bptr->show();
Derived*dptr;
dptr=&derivedObj;
dptr->d=300;
cout<<"right now using pointer to derived class object\"n";
dptr->show();
cout<<"using the typecasting of derived class pointer on base class pointer\"n";
((Derived*)bptr)->d=40;
((Derived*)bptr)->show();


    return 0;
}