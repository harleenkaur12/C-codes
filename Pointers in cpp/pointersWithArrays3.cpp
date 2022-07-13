#include<iostream>
using namespace std;
int main(){
    int arr[10]={7,3,5,9};
    int *p= &arr[0];
    cout<<p<<endl;  //prints address of arr;
    cout<<&p<<endl; //prints address of pointer;
    



    return 0;
}