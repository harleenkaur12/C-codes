#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    int a=1;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        a=a*i;
    }
    cout<<"The factorial of the number is "<<a;
    return 0;
}