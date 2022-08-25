#include<iostream>
using namespace std;
template<class T>
class sample{
    public:
    T a,b;

    // sample(T x=0, T y=0){
    //     this->a=x;
    //     this->b=y;
    // }this will not work in case of string and char
    sample(){};
    sample(T x, T y){
        x=a;
        y=b;
    };
};

int main(){
   


    return 0;
}