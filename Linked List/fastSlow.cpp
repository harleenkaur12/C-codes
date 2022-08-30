#include <iostream>
using namespace std;
class NODE 
{
    public:
    int info;
    NODE *next;
};

class Linkedlist 
{
    NODE *head;
    public:
    Linkedlist()
    {
        head=NULL;
    }
    NODE *getNewnode(int data)
    {
        NODE *newnode=new NODE();
        newnode->next=NULL;
        newnode->info=data;
        return newnode;
    }
    void Appendnode(int data)
    {
        NODE *newnode =getNewnode(data);
        if(head==NULL)
        {
            head=newnode; 
            cout<<"\nNode inserted at head "<<endl;;
            return;
        }
        //find last node 
        NODE *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        cout<<"node inserted at tail "<<endl;
        
        
    }
  
    void showList () //traversal of list 
    {
        NODE *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->info<<"  ";
            temp=temp->next;  
        }
        
    }


    void searchnode(int n)
    {
        NODE *temp=head;
        int flag=0;
        while(temp!=NULL)
        {
            if(temp->info == n)
            {
               flag=1;
               break;
            }
            temp=temp->next;

        }
        if(flag==1)
        {
            cout<<"element found in the linked list "<<endl;
        }
        else 
            cout<<"not found !! sorry "<<endl;
    }
   
    void appendnodeinbetween(int bef,int toin,int end)
    {
            //100 200 250 300 400 500   //200 bef 300 end   newnode k next m bef  end k next m newnnode
            NODE *temp=head;
            while(temp!=NULL)
            {
                if(temp->info==bef)
                {
                      NODE *newnode =getNewnode(toin);
                      newnode->next=temp->next;
                      temp->next=newnode;

                      cout<<"node inserted in between "<<bef <<"  and  "  <<end<<endl;
                      break;
                }
                temp=temp->next;

            }
    }
   void dodelbysearch(int val)
    {
        int flag=0;
        if(head==NULL)
        {
            cout<<"\nEmpty list "<<endl;
            return;
        }
        if(val==head->info)
        {
            head=head->next;;
            cout<<"\nElement deleted from beginning \n";
            showList();
            return;
        }
        NODE *ptr=head;
        NODE *prev=head;
        while(ptr!=NULL)
        {
            if(val==ptr->info)
            {
                flag=1;
                break;
            }
            prev=ptr;
            ptr=ptr->next;
        }
        if(flag==0)
        {
            cout<<"\n\nNOT FOUND";
            return;
        }
        prev->next=ptr->next;
        delete ptr;
        cout<<"\nElement deleted \n";
        showList();
    }

   void traverseLinkedList()
    {
    NODE *slow = head;
    NODE *fast = head->next;
    while (fast && fast->next && fast != slow)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast == slow)
    {
        cout << "Cycle detected" << endl;
    }
    else
    {
        cout << "Not cycle detected" << endl;
    }
}
};


int main()
{
       int data;
       Linkedlist obj;
       int n;
       int choice;
       cout<<"Enter number of nodes u want to enter "<<endl;
       cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        obj.Appendnode(d);
    }
    cout<<"traversal of the linked list "<<endl;
    obj.showList();
    cout<<"Enter the node u want to search "<<endl;
    int search;
    cin>>search;
    obj.searchnode(search);
    cout<<"Adding a node in between "<<endl;
    obj.appendnodeinbetween(200,250,300);
    obj.showList();
    cout<<"Adding a node in between "<<endl;
    obj.appendnodeinbetween(300,350,400);
    cout<<"Traversing the list after adding new node "<<endl;
    obj.showList();

    cout<<"performing deleting operation "<<endl;
    obj.dodelbysearch(300);
    
    obj.traverseLinkedList();
  


  
}