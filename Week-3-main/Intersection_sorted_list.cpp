/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        
        // code goes here.
        Node*t1=head1;
        Node*t2=head2;
        Node*dummy=new Node(-1);
        Node* tail = dummy;
        while(t1!=NULL && t2!=NULL)
        {
            if(t1->data==t2->data)
            {
                tail->next = new Node(t1->data);
                tail = tail->next;
                t1=t1->next;
                t2=t2->next;
                

            }
            else if(t1->data<t2->data)
            {
                t1=t1->next;
            }
            else
            {
                t2=t2->next;
            }
        }
        return dummy->next;
    }
};
