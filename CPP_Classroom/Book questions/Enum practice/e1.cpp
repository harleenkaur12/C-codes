#include<iostream>
using namespace std;
int main(){ 
    enum colors{red=8,yellow,green};
    cout<<red;
    cout<<yellow<<green<<endl;
    colors background;
    //background is of type colors 
    //but we are not allowed to put background= any int value 
    //c++ does not allow any int's value to be converted into enum
    
    enum shapes{circle, square, rectangle};
    shapes ellipse, cone, triangle;

    cout<<cone;


    return 0;
}