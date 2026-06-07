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
    ListNode*reverse(ListNode*h1)
    {
        ListNode*prev=nullptr;
        ListNode*curr=h1;
        while(curr)
        {
        ListNode*nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
        }return prev;
    }
    void reorderList(ListNode* head) {
        if(!head||!head->next) return;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*t1=reverse(slow->next);
        slow->next=nullptr;
        ListNode*f=head;
        ListNode*s=t1;
        while(s)
        {
            ListNode*f1=f->next;
            ListNode*s1=s->next;
            f->next=s;
            s->next=f1;
            f=f1;
            s=s1;
        }
        
    }
};