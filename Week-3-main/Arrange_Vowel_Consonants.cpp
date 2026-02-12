/*
Structure of the node of the linked list is as
struct Node
{
    char data;
    struct Node *next;

    Node(char x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // Function to rearrange the linked list based on vowels
    struct Node *arrangeCV(Node *head) {
        // code here
        Node*vHead=nullptr;
        Node*vTail=nullptr;
        Node*cHead=nullptr;
        Node*cTail=nullptr;
        Node*curr=head;
        while(curr)
        {
            Node*nextNode=curr->next;
            curr->next=nullptr;
            if(curr->data=='a' || curr->data=='e' || curr->data=='i' || curr->data=='o' || curr->data=='u')
            {
                if(!vHead)
                {
                    vHead=curr;
                    vTail=curr;
                }
                else
                {
                    vTail->next=curr;
                    vTail=curr;
                }
            }
            else
            {
                if(!cHead)
                {
                    cHead=curr;
                    cTail=curr;
                }
                else
                {
                    cTail->next=curr;
                    cTail=curr;
                }
            }
            curr=nextNode;
        }
        if(vHead==nullptr)
        {
            return cHead;
        }
        vTail->next=cHead;
        return vHead;
    }
};
