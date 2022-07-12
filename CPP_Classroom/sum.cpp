#include<iostream>
using namespace std;
/**int sum(int a, int b){
    int sum=a+b;
    return sum;
}
int sum(double a, double b){
    double sum=a+b;
    return sum;
}
int sum(float a, float b){
    float sum=a+b;
    return sum;
}
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;

    int answer = sum(a,b);
    cout<<answer;
    
    return 0;
}*/
//optimisation to avoid overloading and ambiguity
template<class T>
T sum(T a,T b)
{
    T result;56
    4
    result=a+b;
    return result;
}
int main(){
    int i=5,j=6,k;
    double f=2.0,g=0.5,h;
    k=sum<int>(i,j);
    h=sum<double>(f,g);
    cout<<k<<endl;
    cout<<h<<endl;
}