#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;
    if (ch>=65 && ch<=90)
    {
        /* code */
        cout<<"It is in uppercase";
    }
    if(ch>=97 && ch<=122){
        cout<<"It is in lowercase";
    }
    

    return 0;
}