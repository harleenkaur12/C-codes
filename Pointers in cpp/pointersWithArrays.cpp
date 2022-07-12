#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,6,6,9,10};
    cout<<arr[0]<<endl;     //this prints a value
    cout<<&arr[10]<<endl;   //this prints the value at 0th index
    cout<<arr<<endl;              //this prints the address at the 0th index
    //this means that arr is a pointer in itself. let's try dereferencing it
    cout<<*arr; //prints the value at the 0th location only
    return 0;
}