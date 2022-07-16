#include<iostream> //preprocessor directive statement
using namespace std;
#define LIMIT 5 //preprocessor directive //cannot be modified this means it is a constant value
int main(){
    for (int i = 0; i < LIMIT; i++)
    {
        /* code */
        cout<<i;
    }
    LIMIT=10;
    cout<<LIMIT;
    

    
    return 0;
}