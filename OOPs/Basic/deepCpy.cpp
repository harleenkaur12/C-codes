#include<iostream>
#include<string.h>
using namespace std;
class Hero{
    int health;

    public:
    char* name;
    int level;

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

hero1.setName("Bani");
cout<<hero2.name; //changing name in hero1 changed the name for hero2 as well which copied hero1 basically.
//we have still not done deep copy XD
    return 0;
}