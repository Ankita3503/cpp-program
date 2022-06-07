#include<iostream>
using namespace std;
class node{
    public:
   int data;
   node* next;
    
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(node* &head ,int num)
{
    node *newnode = new node(num);  // creation of newnode

    newnode->data = num;    // assigning values in data part

    newnode->next =head; 

    head=newnode;
}
void print_list(node* &head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    node* head = new node(10);
        insertAtHead(head,20);
        insertAtHead(head,30);
        insertAtHead(head,40);
        insertAtHead(head,50);
        print_list(head);
        return 0;
}