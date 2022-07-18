#include<iostream>
using namespace std;
inline int &abc(int &x, int &y){
    if(x>y){
        cout<<"x is greater";
    }
    else{
        cout<<"y is greater";
    }
}

int main(){
    int a=5;
    int b=6;
    abc(a,b); //we cannot directly pass values inside the function. since arguments need to be equal to our parameters. how can &x=1 .But a=&x is possible. Hence we pass it like this.
    
    return 0;
}