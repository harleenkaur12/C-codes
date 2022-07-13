#include<iostream>
using namespace std;
int main(){
    //NULL
    int *p;
    int *q=NULL;
    int *r=0;
    cout<<q;

    //DOUBLE
    int a=10;
    int *u=&a;
    int **v=&u;
    cout<<"The address of variable a is "<<u<<endl;
    cout<<"The address of variable a is "<<&a<<endl;
    cout<<"The address of variable a is "<<*v<<endl;

    cout<<"The address of pointer u is "<<v<<endl;
    cout<<"The address of pointer u is "<<&u<<endl;

    cout<<"The value of variable a is "<<*u<<endl;
    cout<<"The value of variable a is "<<**v<<endl;



    return 0;
}