#include<iostream>
using namespace std;
int main(){
    int var=5;
    int *ptr=&var;
    int **ptr2=&ptr;
    cout<<**ptr2; //dereferencing
    int var=5;
    int *ptr=&var;
    int *ptr2=NULL; 
    return 0;
}