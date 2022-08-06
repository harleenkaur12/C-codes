#include<iostream>
using namespace std;
class class_name{
    public:
    int datamember1;
    string datamember2;

    public:
    class_name(){
        //same name as the class
        //basically a constructor initialises value to the newly created class members.
        //this value is basically garbage value.
        //initialising datamembers with default values-here we are providing our own values to the data members.
        datamember1=68;
        datamember2="Harleen";

    }
};

