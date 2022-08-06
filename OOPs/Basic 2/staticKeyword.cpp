#include<iostream>
#include<string.h>
using namespace std;
class hero{
    private:
    int health;
    
    public:
    char *name;
    char level='A';
    static int timeToComplete;

    void print(){
        cout<<level<<endl;
    }
    //static function
    static int random(){
        cout<<timeToComplete  <<endl;
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
};
int hero::timeToComplete=5;
int main(){
    cout<<hero::timeToComplete<<endl;
    hero a;
    cout<<hero::random()<<endl;




    // cout<<a.timeToComplete<<endl;

    // hero b;
    // b.timeToComplete=10;
    // cout<<b.timeToComplete<<endl;
    // cout<<a.timeToComplete<<endl;


}