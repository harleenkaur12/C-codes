#include<iostream>
using namespace std;
class batsman{
    public:
     string name;
     int innings;
     int notOut;
     int runs;

     batsman(string n="",int i=0,int no=0,int r=0){
        name=n;
        innings=i;
        notOut=no;
        runs=r;
     }

     void battingAverage(){
        float average=runs/innings-notOut;
        cout<<average;
     }
     void display(){
        cout<<name<<" "<<innings<<" "<<notOut<<" "<<runs<<endl;
     }

};
int main(){
    batsman b("ABC",10,4,6);
    b.display();
    b.battingAverage();
    return 0;
}