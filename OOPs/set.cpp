#include<iostream>

using namespace std;

class Person {

    // Complete the class
    string name;
    int age;
    
    public:
    void setValue(string x, int y){
        name=x;
        age=y;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }

};

int main() {

    //Write your code here
    Person p1;
    string x;
    int y;
    cin>>x;
    cin>>y;
    p1.setValue(x,y);
    cout<<"The name of the person is "<<p1.getName()<<" and the age is "<<p1.getAge()<<".";
    return 0;
}