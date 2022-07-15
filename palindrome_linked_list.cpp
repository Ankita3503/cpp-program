// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
    private :
     Node* getmid(Node* head)
     {
         Node* slow= head;
         Node*  fast = head->next;
         while(fast!=NULL && fast->next != NULL)
         {
           fast=fast->next->next;
           slow=slow->next;
         }
         return slow;
     }
     
     Node* reverse(Node* head)
     {
         Node* current=head;
         Node* previous=NULL;
         Node* next=NULL;
         
         while(current!=NULL)
         {
             next=current->next;
             current->next=previous;
             previous=current;
             current=next;
         }
         return previous;
     }
    public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head->next == NULL)
        {
            return true;
        }
        
        // step 1.  find mid
        Node* middle=getmid(head);
        
        //step 2. reverse list ater mid
           Node* temp=middle->next;
           
           middle->next=reverse(temp);
           
        //step 3. compare both halves
        Node*head1 = head;
        Node* head2 = middle->next;
        
        while(head2 != NULL)
        {
            if(head1->data!=head2->data){
                return false;
            }
            
            head1=head1->next;
            head2=head2->next;
        }
        
        //step 4. repeat step 2.
        
          temp=middle->next;
           
           middle->next=reverse(temp);
        
           return true;
     }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends