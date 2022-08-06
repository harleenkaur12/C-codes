#include<iostream>
using namespace std;
class mobile{
    public:
    string model;
    int year_of_manufacture;

    public:
    // void set_details(string model, int year_of_manufacture){
    //     this->model=model;
    //     this->year_of_manufacture=year_of_manufacture;
    // }

    void set_details(string mod, int year){ //mod and year_of_manufacture are actually local variables of this function
        model=mod;
        year_of_manufacture=year; 
    }
    void print(){
        cout<<this->model<<endl;
        cout<<this->year_of_manufacture<<endl;
    }
};
int main(){
    mobile iphone;
    iphone.set_details("Iphone 12", 2001);
    cout<<iphone.model<<endl;
    cout<<iphone.year_of_manufacture<<endl;
    iphone.print();
    
    return 0;
}