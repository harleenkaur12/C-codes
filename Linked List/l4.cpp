#include<iostream> 
using namespace std; 
class node{ 
    public: 
    int data; 
    node*next; 
    node(){};     
    node(int data){ 
        this->data=data; 
        this->next=NULL; 
    } 
    ~node(){ 
        int value=this->data; 
        if(this->next!=NULL){ 
            delete next; 
            next=NULL; 
        } cout<<endl; 
    } 
}; 
void insertathead(node* &head,int d){ 
    node*temp=new node(d); 
    temp->next=head; 
    head=temp; 
} 
void insertattail(node* &tail,int d){ 
    node *temp=new node(d); 
    tail->next=temp; 
    tail=tail->next; 
} 
void deletion(int pos,node* &head){ 
    if(pos==1){ 
        node*temp=head; 
        head=head->next; 
        temp->next=NULL; 
        delete temp; 
    } 
    else{ 
        node*current=head; 
        node*prev=NULL; 
        int cnt=1; 
        while(cnt<pos){ 
            prev=current; 
            current=current->next; 
            cnt++; 
        } 
        prev->next=current->next; 
        delete current; 
    } 
} 
void print(node* &head){ 
    node *temp=head; 
    while(temp!=NULL){ 
        cout<<temp->data<<" "; 
        temp=temp->next; 
    } 
} 
int main(){ 
    node *node1=new node(10); 
    node*head=node1; 
    node*tail=node1; 
    insertathead(head,18); 
    insertathead(head,21); 
    print(head); 
    insertattail(tail,34); 
    print(tail); 
    deletion(1,head); 
    print(head); 
    return 0; 
}