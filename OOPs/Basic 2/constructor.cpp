#include<iostream>
#include<string.h>
using namespace std;
class hero{
    private:
    int health;
    
    public:
    char *name;
    char level='A';
    int timeToComplete;

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
    

};

int main(){
    //object created statically
    cout<<"Hi"<<endl;
    hero  rakesh;
    cout<<"Hello"<<endl;
    //object created dynamically
    hero *b=new hero;
    cout<<"Address of rakesh is "<<&rakesh;
    //copying objects
    hero suresh(rakesh);
    cout<<"Health of rakesh is "<<rakesh.getHealth();
    cout<<"Level of rakesh is "<<rakesh.getLevel();

    cout<<"Health of suresh is "<<suresh.getHealth();
    cout<<"Level of suresh is "<<suresh.getLevel();
    
    delete b;


    
     
}