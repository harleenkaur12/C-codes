#include<iostream>
using namespace std;
int main(){
    union u{
        int a;
        int b;
        char c;
        char arr[2];
    } u1;
    cout<<"The size of union is "<<sizeof(u1)<<endl; //size of the largest element is the size of the entire union

+
    u1.a=1;
    cout<<u1.a;
    return 0;
}