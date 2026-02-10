/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
       Node*curr=head;
       Node*prev=NULL;
       Node*front=NULL;
       while(curr!=NULL)
       {
           front=curr->next;
           curr->next=prev;
           prev=curr;
           curr=front;
          
       }
       head=prev;
       return head;
    }
};
