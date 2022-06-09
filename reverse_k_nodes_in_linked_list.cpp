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
 node* reverse(node* &head ,int k){
   if(head==NULL)
   {
      return NULL;
   }
   
    node* prev = NULL;
    node* current = head;
    node* next = NULL;
    int count = 0;
 
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
 
    /* next is now a pointer to (k+1)th node
    Recursively call for the list starting from current.
    And make rest of the list as next of first node */
    if (next != NULL)
        head->next = reverse(next, k);
 
    /* prev is new head of the input list */
    return prev;
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
    cout<<"\nreverse k nodes in linked list \n";
    node* new_list=reverse(head,2);
    print_list(new_list);
   
    return 0;
}