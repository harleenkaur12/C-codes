#include<iostream>
using namespace std;
int main(){
    char var='5';
    char *varptr=&var;
    cout<<"Value of var is "<<var<<endl;
    cout<<"Address of var is "<<&var<<endl;
    cout<<"Value of pointer is "<<varptr<<endl;
    cout<<"Value pointed by pointer is "<<*varptr<<endl;
    cout<<"Address of pointer is "<<&varptr<<endl;
    cout<<"Size of varptr is "<<sizeof(varptr)<<" bytes"<<endl;
    
    return 0;
}