#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>=0 && ch<=9){
        cout<<"It is a number"<<endl;
    }
    else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        cout<<"It is an alphabet"<<endl;
    }
    else{
        cout<<"It is a special character"<<endl;
    }
    return 0;
}