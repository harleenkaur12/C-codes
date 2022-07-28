#include<iostream>
using namespace std;

class arithmetic{
   // public:
    int x;
    int y;

    public:
    arithmetic(){}
    arithmetic(int a, int b){
        x=a;
        y=b;
    }

    arithmetic operator + (const arithmetic &b){
        arithmetic add;
        add.x=this->x +b.x;
        add.y=this->y +b.y;
        return add;

    }
    void display(){
        cout<<x<<endl;
        cout<<y<<endl;
    }
    
};
int main(){
    arithmetic obj1(2,4);
    arithmetic obj2(2,3);
    arithmetic sum=obj1+obj2;
    sum.display();
    









    // arithmetic b;
    // b.x=1;
    // b.y=2;

    // arithmetic c;
    
    // cout<<c.x<<" "<<c.y<<endl;


    
    return 0;
}