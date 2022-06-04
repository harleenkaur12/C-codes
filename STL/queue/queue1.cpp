#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");

    cout<<"First element is "<<q.front(); //FIFO-- first in first out principle is used here.

    cout<<"Size "<<q.size();
    q.pop();
    cout<<"Size after pop "<<q.size();
    
    return 0;
}