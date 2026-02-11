/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        int c0=0,c1=0,c2=0;
        Node*t1=head;
        while(t1)
        {
            if(t1->data==0) c0++;
            else if(t1->data==1) c1++;
            else c2++;
            t1=t1->next;
            
        }
       Node*curr=head;
       while(c0--)
       {
           curr->data=0;
           curr=curr->next;
       }
       while(c1--)
       {
           curr->data=1;
           curr=curr->next;
       }
       while(c2--)
       {
           curr->data=2;
           curr=curr->next;
       }
       return head;
        
    }
};
