#include<iostream>
using namespace std;
int main(){
    float principal, rate, time, interest,ci, a;
    cin>>principal;
    cin>>rate;
    cin>>time;
    interest=1+rate/100;

    ci=1;
    for (int i = 0; i < time; i++)
    {
        /* code */
        ci=ci*interest;
    }
    a = principal*ci -principal;

    cout<<"The compound interest is "<<a;
    

    return 0;
}