#include<iostream>
using namespace std;
int main(){
    //NULL
    int *p;
    int *q=NULL; //if we try to derefernce a null pointer, we get segmentation error//NULL pointer also called WILD pointer
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


    //VOID POINTER
    int var=5;//cannot be dereferenced. it doesn't know which datatype
    char alpha='A';//8 byte space is saved using a single pointer
    void *ptr;
    ptr=&var;
    cout<<(int*)ptr<<endl; //explicit typecasting
    ptr=&alpha;
    cout<<(char*)ptr<<endl;

    //DANGLING POINTER
    //pointer pointing to memory that has been freed




    return 0;
}