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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode*tmp=new ListNode(0);
        tmp->next=head;
        ListNode*temp=tmp;
        unordered_map<int,ListNode*>mpp;
        int s=0;
        while(temp)
        {s+=temp->val;
        mpp[s]=temp;
         temp=temp->next;

        }
        ListNode*t1=tmp;
        int s1=0;
        while(t1)
        {
            s1+=t1->val;
            mpp[s1];
            t1->next=mpp[s1]->next;
            t1=t1->next;
        }
        return tmp->next;
    }
};