#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    
    public:
    char level='A';

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

    void setLevel(char ch){
        level=ch;
    }

};

int main(){
    //static allocation

    hero a;
    cout<<"Level is "<<a.level<<endl;
    cout<<"Health is "<<a.getHealth()<<endl;
    

    //dynamic allocation

    hero *b=new hero;
    
    b->setHealth(70);
    b->setLevel('A');

    cout<<"Level is "<<(*b).level<<endl; 
    cout<<"Health is "<<(*b).getHealth()<<endl; 
    delete b;

    
}