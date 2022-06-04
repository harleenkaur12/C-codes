#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Love");
    s.push("Babbar");
    cout<<"Top element-- "<<s.top()<<endl; //LIFO--last in first out
    s.pop();
    cout<<"Top element after pop-- "<<s.top()<<endl; //LIFO--last in first out
    
    cout<<"Size of stack "<<s.size();
   // cout<<"Last element "<<s.<<endl;

  
    
    return 0;
}