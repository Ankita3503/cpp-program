#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
class linked_list
{
     node* head;
     public:
     linked_list()
     {
         head=NULL;
     }

     // add new element at the beginning of the linked list
     void insert_at_beginning(int new_element)
     {
         node* newnode=new node();
         newnode->data=new_element;
         newnode->next=head;
         head=newnode;
     }

     void display()
     {
         node* temp=head;
         if(temp!=NULL)
         {
             cout<<"the list contains ";
             while(temp!=NULL)
             {
                 cout<<temp->data<<" ";
                 temp=temp->next;
             }
              cout<<endl;
         }
         else
         {
             cout<<"the list is empty ";
         }
     }
};

int main()
{
    linked_list ob;
    ob.insert_at_beginning(5);
     ob.insert_at_beginning(6);
     ob.insert_at_beginning(7);
     ob.insert_at_beginning(8);
     ob.display();
     return 0;
}