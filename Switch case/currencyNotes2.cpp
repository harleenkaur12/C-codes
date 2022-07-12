#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int den;
    cin>>den;
    switch(den){
        case 1000:
         cout<<n/1000;
         break;
        

        case 500:
         cout<<n/500;
         break;

        case 100:
         cout<<n/100;
         break;

        case 10:
         cout<<n/10;
         break;
       

       
        
    }
    return 0;
}