#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if (ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        /* code */
        cout<<"It is a vowel"<<endl;
    }
    else{
        cout<<"It is a consonant"<<endl;
    }
    
    
    return 0;
}