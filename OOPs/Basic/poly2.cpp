#include<iostream>
using namespace std;
class base{
    public:
     virtual void show(){
        cout<<"hello this is base"<<endl;
    }
    void display(){
        cout<<"hello this is base"<<endl;
    }
};
class derived:public base{
    public:
    void show(){
        cout<<"hello this is derived"<<endl;
    }
    void display(){
        cout<<"this is derived"<<endl;
    }
};
int main(){
    base bObj;
    derived dObj;
    base *bptr;
    cout<<"bptr points to base class object"<<endl;
    bptr=&bObj;
    bptr->display();
    bptr->show();
    cout<<"bptr points to derived class object"<<endl;
    bptr=&dObj;
    bptr->display();
    bptr->show();
    return 0;
}
