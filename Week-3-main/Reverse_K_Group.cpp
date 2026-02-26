/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode*reverse(ListNode*head)
    {
        ListNode*front=nullptr;
        ListNode*prev=nullptr;
        ListNode*curr=head;
        while(curr)
        {
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    ListNode*find(ListNode*head,int k)
    {
        int i=1;
        ListNode*temp=head;
        while(temp && i<k)
        {
            temp=temp->next;
            i++;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*curr=head;
        ListNode*nextNode=nullptr;
        ListNode*prevNode=nullptr;
        ListNode*kthNode=nullptr;
        ListNode*newHead=nullptr;
        while(curr)
        {
            kthNode=find(curr,k);
            if(!kthNode)
            {
                if(prevNode)
                {
                    prevNode->next=curr;
                }
                break;
            }
            nextNode=kthNode->next;
            kthNode->next=nullptr;
            newHead=reverse(curr);
            if(curr==head)
            {
                head=newHead;
            }
            else
            {
                prevNode->next=newHead;
            }
            curr->next=nextNode;
            prevNode=curr;
            curr=nextNode;
           

        }
        return head;
        
    }
};
