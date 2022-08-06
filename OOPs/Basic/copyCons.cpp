#include<iostream>
using namespace std;
class hero{
    int health;
    int wealth;

    public:
    void setHealth(int h){
        health=h;
    }
    void setWealth(int w){
        wealth=w;
    }
    void display(){
        cout<<"Health is "<<health<<endl;
        cout<<"Wealth is "<<wealth<<endl;
    }
    

};
int main(){
    //basic object creation and accessing attributes
    hero h1;
    h1.setHealth(12);
    h1.setWealth(10);
    h1.display();
    
    //copying objects
    // hero h2;
    // h2=h1; -----> this is an example of using assignment operator for copying constructors
    hero h2=h1;
    h2.display();


    
    return 0;
}