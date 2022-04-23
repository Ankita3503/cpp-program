#include<iostream>
using namespace std;
//creating  a node
class node
{
   public:
   int data;
   node* next;
};
 // creating a linked list of 3 node
 void print_list(node* n)
 {
     while(n!=NULL)
     {
         cout<<n->data<<" ";
         n=n->next;
     }
 }
int main()
{   
    node* head=NULL;     
      node* second=NULL;
       node* third=NULL;
   //allocate 3 node in a heap
     head=new node();  // it is the first node of the linked list
     second=new node();
     third=new node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;
   print_list(head);

return 0;

}
