#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    if(a+b>c){
        if(a+c>b){
            if(c+b>a){
                cout<<"It is a valid triangle";
            }
        }
    }
    else{
        cout<<"It is not a valid triangle";
    }
    return 0;
}