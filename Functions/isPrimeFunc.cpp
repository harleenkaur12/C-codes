#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){ 
        //branching
        if(n%i==0){
            return 0; //return is used to exit the function.
        }
        
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter the value of n  ";
    cin>>n; 
    if(isPrime(n)){
        cout<<"It is a prime number";
    }
    else{
        cout<<"It is not a prime number";
    }

}