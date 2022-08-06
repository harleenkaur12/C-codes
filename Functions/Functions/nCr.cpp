#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        factorial=factorial* i;
    }
    return factorial;
    
}
int main(){
    int n;
    int r;
    cout<<"Enter the value of n";
    cin>>n;
    cout<<"Enter the value of r";
    cin>>r;
    int z=n-r;
    int numerator= fact(n);
    int denominator= fact(r)*fact(z);
    int ncr=numerator/denominator;
    cout<<"The value of nCr is "<<ncr;

    
    return 0;
}