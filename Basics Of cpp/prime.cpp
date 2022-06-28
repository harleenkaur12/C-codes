#include<iostream>
using namespace std;
int main(){
    int i,check,n;
    cout<<"Enter a number";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
      
        if(n%i==0){
            check++;
        }
        

    }
    if(check==2){
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is not prime";
    }
    
    return 0;
}