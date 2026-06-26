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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* tmp = list1;
        ListNode*te=tmp;
        ListNode* l = nullptr;
        ListNode* r = nullptr;
        int idx = 0;
        while (tmp) {
            if (idx == a - 1) {
                l = tmp;
            }
            if (idx == b) {
                r = tmp->next;
            }
            tmp = tmp->next;
            idx++;
        } ListNode*t1=list2;
        ListNode*t2=t1;
        while(t1->next)
        {
            
            t1=t1->next;
        }
        l->next=t2;
        t1->next=r;
        return te;
    }
};