#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    bool check_prime;
    if(n<=1){
        cout<<"The number is not prime";
    }
    else{
        for (int i = 2; i <= n/2; i++)
    {
        /* code */
        if(n%i==0){
            check_prime=0;
            break;
        }

        else{
            check_prime=1;
        }


    }
    if(check_prime){
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is not prime";
    }
    
    

    }
    
    return 0;
}