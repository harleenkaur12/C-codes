#include<iostream>
using namespace std; 
class node{
    public:
    int data;
    node *next;
    node(){};
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
node*head=NULL;
void insertHead(int d){
    node *temp= new node(d);
    temp->next=head;
    head=temp;
}
void insertTail(int d){
    node *temp=new node(d);
    temp->next = NULL;
}
void display(){
    node *ptr;
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main(){
   insertHead(3);
   insertHead(1);
   insertHead(7);
   insertHead(2);
   insertHead(9);
   insertTail(4);
   cout<<"The linked list is: ";
   display();
   return 0;
}