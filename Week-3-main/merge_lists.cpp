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
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node*t1=head1;
        Node*t2=head2;
        Node* dummy=new Node(-1);
        Node*tail=dummy;
        while(t1!=NULL && t2!=NULL)
        {
            if(t1->data <t2->data)
            {
                tail->next=t1;
                t1=t1->next;
                tail=tail->next;
            }
            else
            {
                tail->next=t2;
                t2=t2->next;
                tail=tail->next;
            }
        }
        while(t1!=NULL)
        {
            tail->next=t1;
            t1=t1->next;
            tail=tail->next;
        }
        while(t2!=NULL)
        {
            tail->next=t2;
            t2=t2->next;
            tail=tail->next;
        }
        return dummy->next;
        
    }
};
