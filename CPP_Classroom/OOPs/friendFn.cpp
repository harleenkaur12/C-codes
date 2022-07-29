#include<iostream>
using namespace std;
class complex{
    float real;
    int img;
    public:
    complex(float r=0,int i=0){
        real=r;
        img=i;
    }
    friend complex operator +(complex & o1, complex & o2);
    friend complex operator +(complex & o1, float value);
    friend complex operator +(float value,complex & o2);

    void display(){
        cout<<real<<endl;
        cout<<img<<endl;
    }

};
complex operator +(complex & o1, complex & o2){     //these are reference variables
    complex result;
    result.real = o1.real + o2.real;
    result.img = o1.img  + o2.img;
    return result;

}
complex operator +(complex & o1, float value){
    complex result;
    result.real=o1.real+value;
    result.img=o1.img+value;
    return result;
}
complex operator +(float value,complex & o2){
    complex result;
    result.real=value+o2.real;
    result.img=value+o2.img;
    return result;
}
int main(){
    complex a(1,3);
    complex b(2,6);
    complex c=a+b;
    complex d=20+a;
    c.display();
    d.display();
    return 0;
}