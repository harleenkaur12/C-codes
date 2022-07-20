#include<iostream>
using namespace std;
int main(){
    void *ptr;
    int a=10;
    ptr=&a;
    //cout<<*ptr; 
    cout<<*(int*)ptr;
    return 0;
}