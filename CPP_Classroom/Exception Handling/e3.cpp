#include<iostream>
using namespace std;
void divi(int x,int y){
    try{
        if(y==0){
            throw y;
        }
        else{
            cout<<x/y;
        }
    }
    catch(int z){
            cout<<"Divide by zero";
            throw;
        }
}
int main(){
    int a,b,r;
    cin>>a>>b;
    try{
        divi(a,b);
    }
    catch(int){
        cout<<"Exception handled";
    }
    return 0;
}