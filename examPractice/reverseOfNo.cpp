#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number "<<endl;
    cin>>num;

    int rev=0;
    

    while(num!=0){
        int rem;
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;

    }
    cout<<"The reverse of the provided number is "<<rev;
    return 0;
}