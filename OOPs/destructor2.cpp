#include<iostream>
using namespace std;
class destructor2
{
private:
    /* data */
public:
    destructor2(){
        
        cout<<"Constructor is called"<<endl;
}

    ~destructor2(){
      cout<<"Destructor is called"<<endl;
    }
        


};


int main(){
    destructor2 des; //on creating a  new object a constructor as well as a destructor is called.
    return 0;
}