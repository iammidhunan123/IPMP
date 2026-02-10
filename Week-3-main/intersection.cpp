/*
class Node {
public:
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
  
    Node* intersection(Node*h1,Node*h2,int d)
    {
        
        while(d--)
        {
            h2=h2->next;
        }
        while(h1!=h2)
        {
            h1=h1->next;
            h2=h2->next;
        }
        return h1;
    }
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        int n1=0;
        int n2=0;
        Node*t1=head1;
        Node*t2=head2;
        while(t1!=NULL)
        {
            n1++;
            t1=t1->next;
        }
        while(t2!=NULL)
        {
            n2++;
            t2=t2->next;
        }
        if(n1>n2)
        {
            return intersection(head2,head1,n1-n2);
        }
        else
        {
            return intersection(head1,head2,n2-n1);
        }
        
    }
};
