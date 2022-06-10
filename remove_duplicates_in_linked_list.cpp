// remove duplicates from sorted list
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

void insertAtTail(node* &tail ,int num)
{
     node* newnode = new node(num);

     tail->next=newnode;

     tail=newnode;

}

node *removeDuplicates(node * &head)
{
   if(head==NULL)
   {
       return NULL;
   }

   node* current=head;
   while(current!=NULL )
   {
       if((current->next!=NULL) && current->data==current->next->data)
       {
          node* next_next=current->next->next;

          node* nodetodelete = current->next;

          delete(nodetodelete);
          current ->next=next_next;

       }
       else{
           current=current->next;
       }
   }
   return head;
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
    node* node1 =new node(1);
    node*head=node1;
    node*tail=node1;

    
   
    insertAtTail(tail,2);
    insertAtTail(tail,2);
    insertAtTail(tail,5);
    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtTail(tail,6);
    insertAtTail(tail,7);
    insertAtTail(tail,7);
  
    cout<<"Linked list \n";
    print_list(head);


   cout<<"\nafter removing duplicates\n";
    node* new_node = removeDuplicates(head);
    print_list(new_node);
   
    return 0;
}