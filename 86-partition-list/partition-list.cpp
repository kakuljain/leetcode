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
    ListNode* partition(ListNode* head, int x) {
        ListNode*p1=new ListNode(0);
        ListNode*p2=new ListNode(0);
        ListNode*t1=p1;
        ListNode*t2=p2;
        if(head==nullptr) return head;
        while(head!=NULL)
        {   if(head->val<x)
        {
            t1->next=head;
            t1=t1->next;
        }
        else
        {
            t2->next=head;
            t2=t2->next;
        }
        head=head->next;
        }
        t2->next=NULL;
        t1->next=p2->next;
        return p1->next;
    }
};