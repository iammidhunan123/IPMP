/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // code here
        if(head == NULL || head->next == NULL) 
            return head;
        int len=1;
        Node*tail=head;
        while(tail->next!=NULL)
        {
            len++;
            tail=tail->next;
        }
        if(k%len==0) return head;
        k=k%len;
        tail->next=head;
       
        Node*temp=head;
           for(int i=1;i<k;i++)
           {
               temp=temp->next;
           }
            head=temp->next;
            temp->next=NULL;
            return head;
            
    }
};
