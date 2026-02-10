/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node*slow=head;
        Node*fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                break;
            }
        }
        if(slow!=fast)
        {
            return;
        }
        slow=head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        Node*start=slow;
        Node*temp=start;
        while(temp->next!=start)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        
    }
};
