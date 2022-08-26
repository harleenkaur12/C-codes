#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(){};
    node(int data){};
    node(int data,node*ptr){};
};
int main(){
    node *headptr;
    node firstnode(4);
    headptr=&firstnode;
    node *previousnode=&firstnode;
    for(int i=0;i<4;i++){
        int d;
        cin>>d;
        node*ptr=new node(d);
        previousnode->next=ptr;
        previousnode=ptr;
    }
    return 0;
}