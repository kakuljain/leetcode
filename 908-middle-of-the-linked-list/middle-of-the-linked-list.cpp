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
    ListNode* middleNode(ListNode* head) {
        int n = 0;
        ListNode* temp = head;
        while (temp) {
            temp = temp->next;
            n++;
        }
        ListNode* prev = head;
        ListNode* t1 = nullptr;
        int cnt = 0;
        while (prev) {
            cnt++;

            if (cnt == n / 2 + 1) {
                t1 = prev;
            }
        
        prev = prev->next;
        }
        return t1;
    }
};