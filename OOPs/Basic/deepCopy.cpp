#include<iostream>
#include<string.h>
using namespace std;
class Hero{
    int health;

    public:
    char* name;
    char level;

    Hero(){
        cout<<"Simple constructor is called "<<endl;
        name=new char[100];
    }
    Hero(int health){
        this->health=health;
    }
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }

    //copy constructor
    Hero(Hero &temp){
        health=temp.health;
        name=temp.name;
        level=temp.level;

    }

    void setName(char name[]){
        strcpy(this->name,name);
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(int l){
        level=l;
    }



};
int main(){
    Hero hero1;
    hero1.setHealth(10);
    hero1.setLevel(22);
    hero1.setName("Harleen");

Hero hero2(hero1);
cout<<hero2.name<<endl;

hero2.setName("Bani");
cout<<hero2.name;

    return 0;
}