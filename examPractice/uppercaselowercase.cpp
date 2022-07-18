#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter any character"<<endl;
    cin>>a;
    if (a>='a' && a<='z')
    {
        /* code */
        cout<<"It is in lowercase"<<endl;
    }
    else if(a>='A' && a<='Z'){
        cout<<"It is in uppercase"<<endl;
    }
    else{
        cout<<"It is not an alphabet"<<endl;
    }
    

    return 0;
}