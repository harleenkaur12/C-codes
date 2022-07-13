#include<iostream>
using namespace std;
int sum(int a){
    if(a<=9){ //base condition can also be a==0
        return a;
    }
    
    
   return (a%10) + sum(a/10);
}

int main(){
    
    cout<<sum(111);
}