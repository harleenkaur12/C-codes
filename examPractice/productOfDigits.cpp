#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int product =1;
    while(n>=10){
        product=product*(n%10);
        n=n/10;
     }
     cout<<"Product of digits of the number is "<<product;
    return 0;
}