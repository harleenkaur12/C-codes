#include <iostream>
using namespace std;
int findMax(int a,int b,int c,int d){
    if(a>b && a>c && a>d){
        return a;
    }
    if(b>a && b>c && b>d){
        return b;
    }
    if(c>a && c>b && c>d){
        return c;
    }
    if(d>a && d>c && d>b){
        return d;
    } 

}

int main(){
    int a;int b;int c;int d;
    cin>>a>>b>>c>>d;
    int maxIs= findMax(a,b,c,d);
    cout<<maxIs;
    
    
}
