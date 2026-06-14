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
    ListNode* reverse(ListNode*h1)
    {
        ListNode*prev=nullptr;
        ListNode*curr=h1;
        while(curr)
        {
            ListNode*nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode*s=head;
        ListNode*f=head;
        while(f&&f->next)
        {
            s=s->next;
            f=f->next->next;
        }
        ListNode*t=reverse(s);
        s->next=nullptr;
        ListNode*p1=head;
        ListNode*p2=t;
        int ans=0;
        while(p1 && p2)
        {
            ans=max(ans,p1->val+p2->val);
            p1=p1->next;
            p2=p2->next;
        }
        return ans;
    }
};