#include<iostream>
using namespace std;
class a{
    public:
    a(){
        
        cout<<"A is called"<<endl;
    };
};
class b:public a{
    public:
    b(){
        
        cout<<"B is called"<<endl;
    };

};
class c:private b{
    public:
    c(){
        cout<<"C is called"<<endl;
    };
};
int main(){
    c obj;  
    return 0;
}