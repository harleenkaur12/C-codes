#include<iostream>
using namespace std;
#define Area(l,b) (l*b) //no equal to sign  there. Whenever compiler sees this it replaces the name with the value provided
int main(){
    int l,b;
    cin>>l;
    cin>>b;
    cout<<Area(l,b);
    
    return 0;
}