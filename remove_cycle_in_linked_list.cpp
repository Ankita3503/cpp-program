//Detect cycle in linked list
// Floy'd Algorithm  or  Hare and Tortoise Algorithm
// cycle ka matlab ki koi do node ka next (node->next) ek hi node pe point kar raha hai 
 // floy'd algorithm bolta hai ki ek hare hai aur ek tortoise jab dono ek hi node pe aa jaaye toh cycle hai otherwise not


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


void makecycle(node*& head,int position)
{
    node* temp = head;
    node* startnode;
    int count=1;

    while(temp->next!=NULL)
    {
        if(count==position)
        {
             startnode=temp;
        }
        temp=temp->next;
        count++;
    }
   
     temp->next=startnode;  

}

bool detect_cycle(node*&head)
{
    node* slow =head;
    node* fast= head;

    while(fast!=NULL && fast->next!=NULL )
    {
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow)
        {
            return true;
        }
       
    }
     return false;
}

void removecycle(node*&head)
{
    node* slow =head;
    node* fast= head;

    do{
       
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);

    fast=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;


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
    //cout<<"Linked list \n";
   // print_list(head);

    makecycle(head,3);
   // print_list(head);
    cout<<detect_cycle<<"\n";
     
     removecycle(head);
     cout<<detect_cycle(head)<<"\n";
     print_list(head);

    return 0;
}