#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int lastDigit=n%10;
    //to find the first digit of any number

    while(n>=10){
        n=n/10;
    }
    
    int firstDigit=n;
    
    cout<<"The first digit is "<<firstDigit<<endl;
    cout<<"The last digit is "<<lastDigit<<endl; 


   
    return 0;
}