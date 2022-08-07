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
    // Hero(Hero &temp){
    //     health=temp.health;
    //     name=temp.name;
    //     level=temp.level;

    // }


    void setName(char name[]){
        strcpy(this->name,name);
    }
    void setHealth(int h){
        health=h;
    }
    void setLevel(int l){
        level=l;
    }
   

   //copy constructor for deep copy
    Hero (Hero &temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        }



};
int main(){
    Hero hero1;
    hero1.setHealth(10);
    hero1.setLevel(22);
    char name[10]="Harleen";
    
    hero1.setName(name);

Hero hero2(hero1);
cout<<hero2.name<<endl;

hero1.name[0]='g';
cout<<"Name of hero1 "<<hero1.name<<endl;
cout<<"Name of hero2 "<<hero2.name<<endl;

return 0;
}