#include<iostream>
using namespace std;
class a{
    public:
    a(){
        
        cout<<"A is called"<<endl;
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
    c(){
        cout<<"C is called"<<endl;
    };
};
int main(){
    c obj;  
    return 0;
}