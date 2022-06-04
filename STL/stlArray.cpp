#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4>a={1,2,3,4};
    int n=a.size();
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    
    
    
    return 0;
}