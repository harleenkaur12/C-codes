#include<iostream>
using namespace std;
template<class T>
T sum(T a,T b,T c=0, T d=0, T e=0)
{
    T result;
    result=a+b;
    return result;
}
int main(){
    int a=1, b=2, c=3, d=4, e=5, k;
    k= sum <int>(a,b);
    cout<<k<<endl;


    
    return 0;
}