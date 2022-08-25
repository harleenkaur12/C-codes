#include<iostream>
using namespace std;
template<class T>
T add(T a,T b)
{
    return a+b;
}
int main(){
    int a,b;
    cin>>a>>b;
    int r=add<int>(a,b);
    cout<<r;
    return 0;
}