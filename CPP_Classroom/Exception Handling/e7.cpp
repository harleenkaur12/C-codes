#include<iostream>
using namespace std;
template<class T>
class calculator{
    public:
    T a, b;

    calculator(){};
    calculator(T x, T y){
        x=a;
        y=b;
    };
    T add(T a, T b){
        T sum= a+b;
        return sum;
    };
    T sub(T a, T b){
        T dif= a-b;
        return dif;
    };
    T multiply(T a, T b){
        T product= a*b;
        return product;
    };
    T divide(T a, T b){
        T div=a/b;
        return div;
    };
};
int main(){
    int x,y;
    cin>>x>>y;
    calculator<int>c1(x,y);
    int sum=c1.add(x,y);
    int dif=c1.sub(x,y);
    int pro=c1.multiply(x,y);
    int div=c1.divide(x,y);
    cout<<"Sum is "<<sum<<endl;
    cout<<"Difference is "<<dif<<endl;
    cout<<"Product is "<<pro<<endl;
    cout<<"Quotient is "<<div<<endl;    
    return 0;
}