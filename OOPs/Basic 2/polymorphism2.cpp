#include<iostream>
using namespace std;
class complex{
    private:
    int real,imag;
    
    public:
    //overloaded constructor and default at the same time
    complex(int r=0, int i=0){ 
        real=r;
        imag=i;
    }

    complex operator+(complex const &b){ //operator overloading
        complex a;
        a.real=real+b.real;
        a.imag=imag+b.imag;
        return a;
    }

    void print(){
        cout<<real<<"+i"<<imag<<endl;
    }
};
int main(){
    complex c1(10,5), c2(2,4);
    complex c3=c1+c2;
    c3.print();
    return 0;
}