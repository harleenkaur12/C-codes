#include<iostream>
using namespace std;
class ArithmeticOp{
    private:
    int fval,sval;
    public:
    void setValues(int a, int b){
        fval=a;
        sval=b;
    }
    int getfVal();
    int getsVal();
    int add(){
        return fval+sval;
    }
    int sub(){
        return fval-sval;
    }

};
int ArithmeticOp::getfVal(){
    return fval;
}
int ArithmeticOp::getsVal(){
    return sval;
}

int main(){
    ArithmeticOp aobj;
    aobj.setValues(10,6);
    cout<<"Result after addition "<<aobj.add()<<endl;
    
    cout<<"Result after subtraction "<<aobj.sub()<<endl;
    
    return 0;
}