#include<iostream>
using namespace std;
class A{
    public:
    void sayHello(){
        cout<<"Hello love babbar"<<endl;
    }

    void sayHello(string name,int n){
        cout<<"Hello love babbar"<<name<<endl;
    }
    void sayHello(string name){
        cout<<"Hello love babbar"<<name<<endl;
    }
};
int main(){
    
    return 0;
}