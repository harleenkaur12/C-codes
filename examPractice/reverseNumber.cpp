#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number "<<endl;
    cin>>num;
    
    
    while(num>0){
        int remainder=num%10;
       int rev=rev*10+remainder;
        num=num/10;
       
    }
    cout<<num;
    return 0;
}