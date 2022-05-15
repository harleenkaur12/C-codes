#include<iostream>
using namespace std;
int update(int n){
    int ans =n*n;
    return ans;
}
int main(){
    int n=14;
    n=update(n); //here we are updating our variable with the function hence, the value gets updated.
    cout<<n;
    return 0;
}