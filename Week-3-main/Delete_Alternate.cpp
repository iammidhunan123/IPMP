/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function
class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
    
        Node*t=head;
        while(t!=NULL && t->next!=NULL)
        {
            Node*temp=t->next;
            t->next=temp->next;
            delete temp;
            t=t->next;
        }
        
    }
};
