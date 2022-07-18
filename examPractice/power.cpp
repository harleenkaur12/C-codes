#include<iostream>
using namespace std;
int main(){
    int base;
    cout<<"Enter the base value "<<endl;
    cin>>base;
    int power;
    cout<<"Enter the power value "<<endl;
    cin>>power;
    int a=1;

    for (int i = 0; i < power; i++)
    {
        /* code */
        a=a*base;
    }
    cout<<"The answer is "<<a;
    

    return 0;
}
