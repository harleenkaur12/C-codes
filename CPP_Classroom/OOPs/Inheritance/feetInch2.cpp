#include<iostream>
using namespace std;
class Feet{
        public:
        int feet;
        int inches;
        Feet(int f=0,int i=0){
            feet=f;
            inches=i;
        }
        void display(){
            cout<<"Feet"<<feet<<"inches"<<inches<<endl;
        }

    };
    class Inches{
        public:
        int inch;
        Inches(int i=0){
            inch=i;
        }
        Inches(Feet &f){
            inch=f.feet*12 + f.inches;
        }
        void display(){
           cout<<inch<<endl;
        }

    };

int main(){
    Feet f(5,11);
    Inches i=f;
    f.display();
    i.display();

    return 0;

}