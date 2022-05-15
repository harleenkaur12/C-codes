#include<iostream>
using namespace std;
void update(int n){
    n=n/2;
}
int main(){
    int n=10;
    update(n);
    cout<<n; //the same value as given in the main function gets printed as the int created inside void is a copy and anything we do to the xopy doesn't show in the main function. 
    return 0;
}