 //reverse a linked list using iterative method 
 /*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(node* &head,int num)
{
    node* newnode = new node(num);
    
    newnode->data=num;

    newnode->next=head;

    head=newnode;
}

void insertAtTail(node* tail ,int num)
{
     node* newnode = new node(num);

     tail->next=newnode;

     tail=newnode;

}

void insertAtPosition(node* &head ,node* &tail ,int num,int position)
{
    if(position==1)
    {
        insertAtHead(head,num);
        return;
    }

    node*newnode =head;
    int count=1;

   

    while(count < position-1)
    {
        newnode=newnode->next;
        count++;
    }


     if(newnode->next==NULL)
    {
        insertAtTail(tail,num);
        return;
    }
    

     node* nodetoinsert = new node(num);

     nodetoinsert->next=newnode->next;

     newnode->next =nodetoinsert;
}

node * reverse_linked_list(node* &head)
{
    node* previous=NULL;
    node* current =head;
    node* next;

     if (head == NULL || head->next == NULL)
            return head;

    while(current!=NULL)
    {
        next=current->next;
        current->next=previous;

        previous=current;
        current=next;
        
    }
    head=current;
    return previous;
}

void print_list(node* head )
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    node* node1 =new node(5);
    node*head=node1;
    node*tail=node1;

    
    insertAtHead(head,67);
    insertAtTail(tail,78);
    insertAtPosition(head,tail,40,3);
    cout<<"Linked list \n";
    print_list(head);
    cout<<"\nReversed linked list \n";
    node* new_node = reverse_linked_list(head);
   

    print_list(new_node);
    return 0;
}
*/

//reverse a linked list using recursive method
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(node* &head,int num)
{
    node* newnode = new node(num);
    
    newnode->data=num;

    newnode->next=head;

    head=newnode;
}

void insertAtTail(node* tail ,int num)
{
     node* newnode = new node(num);

     tail->next=newnode;

     tail=newnode;

}

void insertAtPosition(node* &head ,node* &tail ,int num,int position)
{
    if(position==1)
    {
        insertAtHead(head,num);
        return;
    }

    node*newnode =head;
    int count=1;

   

    while(count < position-1)
    {
        newnode=newnode->next;
        count++;
    }


     if(newnode->next==NULL)
    {
        insertAtTail(tail,num);
        return;
    }
    

     node* nodetoinsert = new node(num);

     nodetoinsert->next=newnode->next;

     newnode->next =nodetoinsert;
}

node * reverse_recursive(node* &head)
{
   

     if (head == NULL || head->next == NULL)
            return head;

     node* newhead=reverse_recursive(head->next);
     head->next->next=head;
     head->next=NULL;
     return newhead;

}

void print_list(node* head )
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    node* node1 =new node(5);
    node*head=node1;
    node*tail=node1;

    
    insertAtHead(head,67);
    insertAtTail(tail,78);
    insertAtPosition(head,tail,40,3);
    cout<<"Linked list \n";
    print_list(head);
    cout<<"\nReversed linked list \n";
    node* new_node = reverse_recursive(head);
   

    print_list(new_node);
    return 0;
}