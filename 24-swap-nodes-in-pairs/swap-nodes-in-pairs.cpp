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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr)return nullptr;
        ListNode*t1=head;
        ListNode*t2=head->next;
        while(t1!=nullptr && t2!=nullptr)
        {
            swap(t1->val,t2->val);
            if(t1->next != nullptr && t2->next != nullptr)
            {
            t1=t1->next->next;
            t2=t2->next->next;
            }
            else
            break;
            
        }

        return head;
    }
};