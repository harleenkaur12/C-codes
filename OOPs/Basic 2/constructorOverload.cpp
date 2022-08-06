#include<iostream>
using namespace std;
class car{
    public:
    int model_of_car;
    string name_of_car;

    public:
    car(){};
    car(int model, string name){
        model_of_car=model;
        name_of_car=name;
    }

    car(int model){
        model_of_car=model;
    }


};
int main(){
    car audi;
    car baleno(8,"Balenooo");
    cout<<baleno.model_of_car<<endl;
    cout<<baleno.name_of_car<<endl;
    car mercedes(1,"Benz");
    cout<<mercedes.model_of_car<<endl;
    cout<<mercedes.name_of_car<<endl;
    
    return 0;
}