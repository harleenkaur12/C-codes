#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n;
    cin>>m;
    int min;
    if(m-n>0){
        min=n;
    }
    else{
        min=m;
    }

    for (int i = 2; i <=min; i++)
    {
        /* code */
        if(m%i==0 && n%i==0){
            cout<<"The HCF is "<<i;
        }

    }
    

    return 0;
}