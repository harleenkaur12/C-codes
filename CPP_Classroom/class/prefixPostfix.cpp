#include<iostream>
using namespace std;
class num{
    int x;
    public:
    num(){
        x=0;
    }
    void operator++(){
        cout<<"Prefix"<<endl;
        x=x+1;
    }
    void operator++(int a){
        cout<<"Postfix"<<endl;
        x=x+1;
    }
    void print(){
        cout<<"\nValue of x:"<<x<<endl;
    }

};
int main(){
    num n;
    n.print();
    ++n;
    n.print();
    n++;
    n.print();
    
    return 0;
}