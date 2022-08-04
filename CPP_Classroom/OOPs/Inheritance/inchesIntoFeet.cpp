#include<iostream>
using namespace std;
class Inches{
        public:
        int inches;
        int feet;
        Inches(int i=0,int f=0){
            inches=i;
            feet=f;
        }
        void display(){
            cout<<"inches "<<inches<<"Feet "<<feet<<endl;
        }
    };
    class Feet{
        public:
        int feet;
        Feet(int f=0){
            feet=f;
        }
        Feet(Inches &i){
            feet=i.inches/12 + i.feet;
        }
        void display(){
           cout<<feet<<endl;
        }

    };

int main(){
    // Feet f(5,11);
    // Inches i(f);
    // f.display();
    // i.display();
    Inches i(24,2);
    Feet f(i);
    i.display();
    f.display();
    
    return 0;
}