// User function template for C++

/*
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
    Node* divide(Node* head) {
        // code here
        Node*evenHead=nullptr;
        Node*evenTail=nullptr;
        Node*oddHead=nullptr;
        Node*oddTail=nullptr;
        Node*curr=head;
        while(curr)
        {
            Node*nextNode=curr->next;
            curr->next=nullptr;
            if(curr->data%2==0)
            {
                if(!evenHead)
                {
                    evenHead=curr;
                    evenTail=curr;
                }
                else
                {
                    evenTail->next=curr;
                    evenTail=curr;
                }
            }
            else
            {
                if(!oddHead)
                {
                    oddHead=curr;
                    oddTail=curr;
                }
                else
                {
                    oddTail->next=curr;
                    oddTail=curr;
                }
            }
            curr=nextNode;
        }
        if(!evenHead)
        {
            return oddHead;
        }
        evenTail->next=oddHead;
        return evenHead;
    }
};
