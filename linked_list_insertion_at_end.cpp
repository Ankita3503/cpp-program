#include<iostream>
using namespace std;
struct node        // A linked list structure 
{
   int data;
   struct  node* next;   
};
 class linked_list  
 {
     node* head;
     public:
     linked_list()   
     {
         head=NULL;
     }

    //add new element at the end of the list
       void insert_at_end(int new_element)
       {
           node* newnode=new node();
           newnode->data = new_element;
           newnode->next = NULL;
            if(head==NULL)
              {
                head=newnode;
              }
            else
              {
                node* temp=head;
                      while(temp->next!=NULL)
                       {
                           temp=temp->next;
                       }   
                            temp->next=newnode;
                        
              }
       }

       void display()
       {
           node* temp=head;
           if(temp!=NULL)
           {
               cout<<"the list contains: ";
               while(temp!=NULL)
               {
                   cout<<temp->data<<" ";
                   temp = temp->next;
               }
               cout<<endl;
           }
           else
           {
               cout<<"The list is empty.";
           }
       }
 };

 int main()
{
    linked_list obj;
    obj.insert_at_end(5);
    obj.insert_at_end(6);
    obj.insert_at_end(7);
    obj.insert_at_end(8);
    obj.display();
    return 0;
}
 

