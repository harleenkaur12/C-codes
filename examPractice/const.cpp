#include<iostream>
using namespace std;
int main(){
    int x=10;
    const int*ptr=&x;
   ptr=&z;
   x=12;
    cout<<ptr<<endl;
    
    cout<<ptr<<endl;


    return 0;
}