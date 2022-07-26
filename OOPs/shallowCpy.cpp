#include<iostream>
using namespace std;
class students{
    public:
    int age;
    string names;
    //default constructor
    students(){};
    public:
    //parameterised constructor
    students(int age, string names){
        this->age=age;
        this->names=names;
    } 

    //copy constructor
    students(students &obj){
        this->age=obj.age;
        this->names=obj.names;
    }

};
int main(){
    students s1(11,"Harry");
    students s2(s1);    //shallow copy

    students s3(12,"Rishi");
    students s4=s3;     //shallow copy

    students s5;        //for creating this we need a default constructor
    s5=s3;              //default assignment operator





    
    return 0;
}