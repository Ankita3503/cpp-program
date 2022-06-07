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
void insertAtTail(node* &tail,int num)
{
     node* newnode= new node(num);
      tail->next=newnode;
      tail=newnode;
}
void print_list(node * &head)
{
   while(head!=NULL)
   {
       cout<<head->data<<" ";
       head=head->next;
   }
}
int main()
{
    node* node1 =new node(13);
    node* head=node1;
    node* tail=node1;

    insertAtTail(tail,26);
      insertAtTail(tail,39);
        insertAtTail(tail,52);
        print_list(head);
        return 0;
}