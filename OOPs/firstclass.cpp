#include<iostream>
using namespace std;

 class Hero{
        char name[100];
        int health;
        char level;
    };

int main(){
    
    Hero h1;                            //Hero type ka object bna dia
    cout<<"Size of "<<sizeof(h1)<<endl; //sum of sizes of all the entities inside the class


   

    return 0;
}