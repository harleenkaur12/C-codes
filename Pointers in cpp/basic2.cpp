#include<iostream>
using namespace std;
int main(){
    //segmentation fault

    int a=5;
    int *ptr=0;
    cout<<*ptr;

    return 0;
}