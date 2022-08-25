#include<iostream>
using namespace std;
int divi(int x, int y){
    int r;
    try{
        if(y==0){
            throw y;
        }
        else{
            r=x/y;
        }
        
    }
    
    catch(int x){
        cout<<"Unhandled exception"<<endl;

    }
return r;
    
}
int main(){
    int a,b, r;
    cin>>a>>b;
    r=divi(a,b);
    cout<<r;

    return 0;
}