#include<iostream>
using namespace std;
   class product{
    public:
        int weight;
        float price;
    };
int main(){
    product pobj;
    cout<<"Enter the value of weight ";
    cin>>pobj.weight;    //by default its private
    cout<<"Entered value of weight is "<<pobj.weight;
 

    return 0;
}