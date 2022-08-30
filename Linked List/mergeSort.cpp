#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertionathead(node* &head,int d){
    node *temp=new node(d);
    temp->next=head;
    head=temp;
}
void print(node* &tail){
    node *temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node *node1=new node(9);
    node*head=node1;
    insertionathead(head,11);
    insertionathead(head,15);
    insertionathead(head,17);
    insertionathead(head,19);
    print(head);
    node *node2=new node(1);
    node*head1=node2;
    insertionathead(head,2);
    insertionathead(head,3);
    insertionathead(head,4);
    insertionathead(head,5);
    print(head);
}