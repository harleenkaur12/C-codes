#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    int b=20;
    int *q=&b;
    p=q; //as they are already initialised
    cout<<"Address of p is "<<p<<endl;
    cout<<"Address of q is "<<q<<endl;


    int x=10;
    int *l=&x;
    int *m=l;
    cout<<"Address of l is "<<l<<endl;
    cout<<"Address of m is "<<m<<endl;

    return 0;
}