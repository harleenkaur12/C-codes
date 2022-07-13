#include<iostream>
using namespace std;
void print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}
void update(int *p){
    p=p+1;
    cout<<"Inside"<<p<<endl;
    *p=*p+1;
    
}
int main(){
    int a=5;
    int *p=&a;
    //print(p);
    cout<<"Before"<<p<<endl;
    update(p);
    cout<<"After"<<p<<endl;
    cout<<"Value of *p is"<<*p;


    return 0;
}