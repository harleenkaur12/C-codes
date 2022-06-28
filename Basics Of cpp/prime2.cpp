#include<iostream>
using namespace std;
int main(){
    int i, n;
    bool is_prime;
    cin>>n;
    if(n == 0 || n==1){
        is_prime=false;
    }
    for (int i = 2; i <= n/2; i++)
    {
        /* code */
        if(n%i==0){
            is_prime=false;
            break;
        }
        else{
            is_prime=true;
        }

    }
    if(is_prime){
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is not prime";
    }


}