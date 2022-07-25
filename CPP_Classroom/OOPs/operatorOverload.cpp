#include<iostream>
using namespace std;
class temp{
    public:
    int a,b;
    public:
    temp(int x=0,int y=0) //works as both simple and overload constructor
    {
        a=x;
        b=y;
    }
    temp(temp &t)//copy constructor
    {
        a=t.a*2;
        b=t.b*2;
    }
    temp operator =(const temp &t){
        this->a=t.a;
        this->b=t.b;
        cout<<"Assignment operator overload is called"<<endl;

    }
};
int main(){
    temp obj1; //default
    temp obj2(2,3);//default
    temp tobj(obj2);//copy
    temp tobj1=obj2;//copy
    obj1=obj2;//variable to variable copy 
    temp tobj2;
    tobj1=tobj2;//operator overloading
    tobj2.operator=(tobj1);
    
    return 0;
}