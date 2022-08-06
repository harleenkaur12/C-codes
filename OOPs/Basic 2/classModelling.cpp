#include<iostream>
using namespace std;
class Animal{
    public:
    bool gives_birth;
    bool has_two_feet;
    bool can_fly;
};
int main(){
    Animal bird;
    bird.gives_birth=false;
    bird.has_two_feet=true;
    bird.can_fly=true;

    Animal amphibian;
    amphibian.gives_birth=false;
    amphibian.has_two_feet=false;
    amphibian.can_fly=false;

    Animal mammal;
    mammal.gives_birth=true;
    mammal.has_two_feet=false;
    mammal.can_fly=false;
    
    return 0;
}