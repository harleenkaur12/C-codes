#include<iostream>
using namespace std;
class polygon{
    protected:
    int width,height;
    public:
    void set_values(int a,int b){
        width=a;
        height=b;
    }
    virtual int area()=0;
};
class rectangle:public polygon{
    public:
    int area(void){
        return (width*height);
    }
};
class triange:public polygon{
    public:
    int area(void){
        return (width*height)/2;
    }
};
int main(){
    rectangle rect;
    triange trgl;
    polygon*ppoly1=&rect;
    polygon*ppoly2=&trgl;
    ppoly1->set_values(4,5);
    ppoly2->set_values(4,5);
    cout<<ppoly1->area()<<endl;
    cout<<ppoly2->area()<<endl;
    
    
    return 0;
}