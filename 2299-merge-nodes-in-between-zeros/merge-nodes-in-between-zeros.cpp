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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*temp=head->next;
        ListNode*tmp=new ListNode(0);
        ListNode*t1=tmp;
       
        while(temp)
        { int s=0;
        while(temp->val!=0)
           { s+=temp->val;
            temp=temp->next;}
        
        t1->next=new ListNode(s);
        t1 = t1->next;
        temp=temp->next;}
        return tmp->next;
    }
};