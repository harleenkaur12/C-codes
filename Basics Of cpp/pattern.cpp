#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count, temp;
    count=n;
    temp=n;
    for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<n;
    }
    for(int j=0;j<n-i;j++){
        cout<<n-1;
    }
    for(int j=0;j<n-i;j++){
        cout<<n-2;
    }
cout<<endl;
}
    return 0;
}