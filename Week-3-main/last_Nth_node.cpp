/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {

        int n=0;
        Node*Temp=head;
        while(Temp!=NULL)
        {
            n++;
            Temp=Temp->next;
            
        }
        if(k>n) return -1;
        int t=n-k;
        Node*temp=head;
        for(int i=0;i<t;i++)
        {
            temp=temp->next;
        }
        return temp->data;
    }
};
