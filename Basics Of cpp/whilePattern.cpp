#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=n, temp=n;
    while(n>0){
        count=temp;
        while(count>0){
           for (int i = 0; i < n; i++)
           {
            cout<<count<<" ";    //in my solution if a small number gets entered we'll get incorrect outputs. the code was only suitable to run in the particular case and not when we have numbers less than 1;
            
           }
           count--;
            
        }
        cout<<"$";
        n--;
    }
    return 0;
}