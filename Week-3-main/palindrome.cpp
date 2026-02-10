/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
  
    Node*reverse(Node*head)
    {
        Node*prev=NULL;
        Node*curr=head;
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
    bool isPalindrome(Node *head) {
        //  code here
        Node*first=head;
        Node*slow=head;
        Node*fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        Node*second=reverse(slow);
        while(second!=NULL)
        {
            if(first->data!=second->data)
            {
                return false;
            }
            first=first->next;
            second=second->next;
        }
        return true;
        
    }
};
