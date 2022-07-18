#include<iostream>
using namespace std;
void add(int &a){
    a=a+1;
}
int main(){

    int b=20;
    cout<<b;
    add(b);
    cout<<b;

    

    
    return 0;
}