#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    bool is_prime=true;
    if(n==1 || n==0){
        is_prime=false;
    }
    for (int i = 2; i <= n/2; i++)
    {
        /* code */
        if(n%i==0){
            is_prime=false;
            break;
        }
    }
    if(is_prime){
        cout<<"The number is prime "<<endl;
        
    }
    else{
        cout<<"The number is not prime ";
    }
    
    return 0;
}