#include<iostream>
using namespace std;
class smartPhone{
    public:
    string model;
    int year_of_manufacture;
    bool _5g_supported;

    public:
    //default constructor
    smartPhone(){
        model="I gave this value in default constructor";
        year_of_manufacture=0;
        _5g_supported=false;
    }

    //parameterised constructor
    //same datatype as class definition but different identifier 
    //this different identifier can store the value that the programmer enters

    smartPhone(string m1, int y1, bool g1){
        model=m1;
        year_of_manufacture=y1;
        _5g_supported=g1;
    }

    //copy constructor
    //syntax
    //class_name(class_name &obj)
    smartPhone(smartPhone &obj){ //reference variable of constructor we provide as an argument in the main function is created.
        model=obj.model;
        year_of_manufacture=obj.year_of_manufacture;
        _5g_supported=obj._5g_supported;

    }



};
int main(){
    smartPhone unknown;//default constructor gets called.
    cout<<unknown.model<<" "<<unknown.year_of_manufacture<<" "<<unknown._5g_supported<<endl;

    smartPhone redmi("harleen", 10, false);
    //parameterised function
        cout<<redmi.model<<" "<<redmi.year_of_manufacture<<" "<<redmi._5g_supported<<endl;

    smartPhone iphone(redmi);
    cout<<iphone.model<<" "<<iphone.year_of_manufacture<<" "<<iphone._5g_supported<<endl;

    return 0;
}