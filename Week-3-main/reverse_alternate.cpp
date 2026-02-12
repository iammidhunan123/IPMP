/*
  reverse alternate nodes and append at the end
  The input list will have at least one element
  Node is defined as
  struct Node
  {
      int data;
      struct Node *next;

      Node(int x){
        data = x;
        next = NULL;
      }

   };

*/
class Solution {
  public:
    void rearrange(Node* head) {
        
        // add code here
        Node*curr=head;
        Node*alt=nullptr;
        while(curr && curr->next)
        {
            Node*temp=curr->next;
            curr->next=temp->next;
            temp->next=alt;
            alt=temp;
            curr=curr->next;
            
        }
        curr=head;
        while(curr->next)
        {
            curr=curr->next;
        }
        curr->next=alt;
        
    }
};
