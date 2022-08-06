#include<iostream>
using namespace std;
class hero{
    int health;
    public:
    int wealth;
};
int main(){
    hero h1;
    cout<<"The wealth of hero h1 is "<<h1.wealth<<endl; 
    h1.wealth=10;
    cout<<"The wealth of hero h1 is "<<h1.wealth; 

    
    

    
    return 0;
}