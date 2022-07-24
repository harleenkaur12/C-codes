#include<iostream>
#include<string.h>
using namespace std;
class hero{
    private:
    int health;
    
    public:
    char *name;
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
    void setName(char name[]){
        strcpy(this->name, name);
    }
    //constructor
    hero(){
        cout<<"Simple Constructor called "<<endl;
        name=new char[100];
    }

    //parameterised constructor
    hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health=health; 
    }

    //copy constructor
    hero(hero& temp){
        this->health=temp.health;
        this->level=temp.level;
    }
    //desrtructor
    ~hero(){
        cout<<"Simple destructor called"<<endl;
    }

};

int main(){
    //static 
    hero a;

    //dynamic
    hero *b=new hero();
    delete b;














    return 0;
}