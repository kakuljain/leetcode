/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                ListNode* t1 = head;
                ListNode* t2 = slow;
                while (t1 != t2) {
                    t1 = t1->next;
                    t2 = t2->next;
                }
                return t1;
            }

            
        }
        return nullptr;
    }
};