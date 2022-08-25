#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(){};
    node(int data, node*ptr){};
    node(int data){};
    
};
int main(){
    node *headptr;
    node firstnode(4);//first node has data and no pointer
    headptr=&firstnode;

    
    return 0;
}