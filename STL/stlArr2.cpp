#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4>a={1,2,3,4};
    int n=a.size();
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    int front=a.front();
    int back=a.back();
    cout<<"The first and last elements are "<<front<<" & "<<back<<endl;
    cout<<"The element at the second index is "<<a.at(2)<<endl;
    cout<<"Empty or not ? "<<a.empty();
    return 0;
}