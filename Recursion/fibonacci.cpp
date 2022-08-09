#include<iostream>
using namespace std; //for printing nth fibunacci number
int fib(int n){
    //base case  
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cin>>n;
    int final=fib(n);
    cout<<final;
    
    return 0;
}