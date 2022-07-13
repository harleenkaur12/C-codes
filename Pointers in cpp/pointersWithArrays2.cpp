#include<iostream>
using namespace std;
int main(){
    int a[20]={4,9,10,5};
    cout<<&a<<endl;
    cout<<&a[0]<<endl;
    cout<<a<<endl;
    cout<<a[0]<<endl;
    cout<<*a+1<<endl;
    cout<<*(a+1)<<endl;
    return 0;
}