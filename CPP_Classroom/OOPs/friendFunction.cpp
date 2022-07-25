#include<iostream>
using namespace std;

class Rectangle{
    int width, height;
    public:
    Rectangle(){} //constructor
    Rectangle(int x,int y):width(x),height(y){}  //overloaded constructor : shows x is shown is width and y is stored in height
    int area(){   //method of class Rectangle
        return width*height;
    }
        friend Rectangle duplicate(const Rectangle &param); //&object //duplicate is a function
    };

Rectangle duplicate(const Rectangle &param){    //param is an object of class rectangle
    Rectangle res; //object 
    res.width=param.width*2; 
    res.height=param.height*2;
    return res; 
}

int main(){
    Rectangle foo;  //object of rectangle class
    Rectangle bar(2,3); //object
    foo=duplicate(bar);
    cout<<foo.area()<<"\n";
    return 0;
}