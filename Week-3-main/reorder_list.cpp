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
        ListNode*curr=head;
        ListNode*prev=nullptr;
        ListNode*front=nullptr;
        while(curr)
        {
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        head=prev;
        return head;
    }
    void reorderList(ListNode* head) {

        ListNode*slow=head;
        ListNode*fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*first=head;
        ListNode*second=reverse(slow->next);
        slow->next=nullptr;
        ListNode*t1=first;
        ListNode*t2=second;
        while(t1 && t2)
        {
            ListNode*n1=t1->next;
            ListNode*n2=t2->next;
            t1->next=t2;
            t2->next=n1;
            t1=n1;
            t2=n2;
        }

        
    }
};
