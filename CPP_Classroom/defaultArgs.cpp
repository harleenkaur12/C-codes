#include<iostream>
using namespace std;
int add(int a=0, int b=0, int c=0, int d=0, int e=0){
    return a+b+c+d+e;
}
int main(){
    cout<<add(1,2)<<endl; //rest of the variables' default value is taken
    cout<<add(1,2,3)<<endl;
    cout<<add(1,2,3,4)<<endl;
    cout<<add(1,2,3,4,5)<<endl;
    
    
    return 0;
}