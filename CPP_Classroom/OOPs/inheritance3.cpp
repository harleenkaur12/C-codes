#include<iostream>
using namespace std;
class a{
    public:
    a(int a){        //parameterised constructor
        
        cout<<"A is called"<<endl;
        cout<<a<<endl;
    };
};
class b{
    public:
    b(){
        
        cout<<"B is called"<<endl;
    };

};
class c:public a,private b{ //gets called in the same sequence as passed
    public:
    c (int v):a(v){
        cout<<"C is called"<<endl;
    };
};
int main(){
    c obj(7);

    return 0;
}