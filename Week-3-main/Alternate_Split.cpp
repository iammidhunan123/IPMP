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
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
       Node*h1=nullptr;
       Node*h2=nullptr;
       Node*t1=nullptr;
       Node*t2=nullptr;
       Node*curr=head;
       bool flip=false;
       while(curr)
       {
           Node*nextNode=curr->next;
           curr->next=NULL;
           if(!flip)
           {
                if(h1==nullptr)
                {
                    h1=curr;
                    t1=curr;
                }
                else
                {
                    t1->next=curr;
                    t1=curr;
                }
           }
           else
           {
               if(h2==nullptr)
               {
                   h2=curr;
                   t2=curr;
               }
               else
               {
                   t2->next=curr;
                   t2=curr;
               }
           }
           flip=!flip;
           curr=nextNode;
       }
       return {h1,h2};
        
        
    }
};
