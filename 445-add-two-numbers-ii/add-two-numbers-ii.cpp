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
        ListNode*prev=nullptr;
        ListNode*curr=head;
        while(curr)
        {
            ListNode*nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*t1=reverse(l1);
        ListNode*t2=reverse(l2);
        ListNode*ans=new ListNode(-1);
        ListNode*anshead=ans;
        int carry=0;
        while(t1||t2||carry)
        {
            int c1=carry;
            if(t1)
            {
                c1+=t1->val;
               t1= t1->next;
            }
            if(t2)
            {
                c1+=t2->val;
                t2=t2->next;
            }
            ListNode*temp=new ListNode(c1%10);
            ans->next=temp;
            carry=c1/10;
            ans=ans->next;
        }
        ListNode*t3=reverse(anshead->next);

        return t3;
    }
};