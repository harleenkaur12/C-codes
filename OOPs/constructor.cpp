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
    //constructor
    hero(){
        cout<<"Constructor called "<<endl;
    }

    //parameterised constructor
    hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health =health; 
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
    
     
}