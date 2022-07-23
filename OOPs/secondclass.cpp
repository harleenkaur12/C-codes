#include<iostream>
#include "hero.cpp"
using namespace std;
int main(){
 
    Hero H1;     //this can also be done 
    cout<<"Health of H1 "<<endl;
    cin>>H1.health;  //inaccessable as by default all data members are private

    
    return 0;
}