#include<iostream>
using namespace std;
class a{
    public:
    int val;
};
class b:virtual public a{
   
};
class c:virtual public a{
   
};
class d:public b,public c{

};                //now only one copy of a members will be included.

int main(){
    d obj;
    cout<<"inside main function to print the value of a "<<obj.b::val<<endl;
    return 0;
}