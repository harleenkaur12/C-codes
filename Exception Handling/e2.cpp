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
    }    catch(int z){//this only needs type. variable may or may not be given
            cout<<"Divide by zero";
        }
}
int main(){
    int a,b,r;
    cin>>a>>b;
    divi(a,b);
    return 0;
}