#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    
    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

};

int main(){
    hero Ramesh;
    cout<<"Health of Ramesh is "<<Ramesh.getHealth();  //returns some garbage value
    Ramesh.setHealth(70);
    cout<<"Health of Ramesh is "<<Ramesh.getHealth();

}