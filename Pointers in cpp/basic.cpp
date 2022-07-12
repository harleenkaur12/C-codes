#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *ptr=&num;           //declaration of a pointer
    cout<<&num<<endl;              //prints address of num
    cout<<*ptr<<endl;              //prints the value of ptr

    return 0;
}