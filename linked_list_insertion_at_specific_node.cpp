#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
class linked_list
{
   node* head;
   public:
    linked_list()
    {
        head=NULL;
    }

     void insert_at_end(int new_element)   
       {
           node* newnode=new node(); // node* newnode it will point to new node
           newnode-> data = new_element;    // ab new node ka jo data part hai usmein new_element daalenge
           newnode->next = NULL;           // aur new node ka next aprt hai usmein NULL point karenge
            if(head==NULL)
              {
                head=newnode;           
              }
            else
              {
                node* temp=head;      //  ab hume nhi pata ki kitne element hai toh ek temp variable banyenge 
                // jo ki point karega first node ko aur traverse karega last tak jab tak NULL nahi mil jaaye
                // agar temp (head) agar null hai toh linked list hoga hi nahi
                      while(temp->next!=NULL)
                       {
                           temp=temp->next;
                       }   
                            temp->next=newnode;
              }
       }

    // add an element at a specified  node
    void insert_at_specified_position(int new_element ,int position) 
    {
        node* newnode=new node();
        newnode->data=new_element;
        newnode->next=NULL;

        if(position<1)
        {
            cout<<"Position should be greater than 1";
        }
        else if(position==1)
        {
            newnode->next=head;
            head=newnode;
        }
        else
        {
            node* temp=head;
            for(int i=1;i<position-1;i++)
            {
                if(temp!=NULL)
                {
                    temp=temp->next;
                }
            }
            if(temp!= NULL)
            {
               newnode->next = temp->next; 
               temp->next=newnode;
            
            }
            else
            {
                cout<<"the prevoius node is NULL";
            }
        }
    }


    void display()
    {
        node* temp = head;
        if(temp!=NULL)
        {
            cout<<"The list contains ";
        
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
        }
        else
        {
            cout<<"The list is empty";
        }
    }
};

int main()
{
    linked_list ob;
    ob.insert_at_end(5);
    ob.insert_at_end(6);
    ob.insert_at_end(7);
    ob.insert_at_end(8);
    ob.display();
    ob.insert_at_specified_position(9,3);
    ob.display();
    return 0;
}