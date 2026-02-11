/*
// structure of the node is as follows

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

*/
class Solution {
  public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        // code here
        set<int> st;
        Node*t1=head1;
        Node*t2=head2;
        while(t1!=NULL)
        {
            st.insert(t1->data);
            t1=t1->next;
        }
        while(t2!=NULL)
        {
            st.insert(t2->data);
            t2=t2->next;
        }
        Node*dummy=new Node(-1);
        Node*tail=dummy;
        for(auto it:st)
        {
            tail->next=new Node(it);
            tail=tail->next;
        }
        return dummy->next;
    }
};
