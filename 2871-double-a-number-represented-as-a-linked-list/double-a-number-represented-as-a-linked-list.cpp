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
    ListNode* reverse(ListNode* start) {
        ListNode* prev = nullptr;
        ListNode* curr = start;
        while (curr) {
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* t1 = reverse(head);
        ListNode* ans = new ListNode(-1);
        ListNode* anshead = ans;
        int carry = 0;
        while (t1) {
            int c1 = carry;
            c1 += (t1->val) * 2;
            t1 = t1->next;
            ListNode* temp = new ListNode(c1 % 10);
            ans->next = temp;
            carry = c1 / 10;
            ans = ans->next;
        }
        if (carry) {
            ListNode* temp = new ListNode(carry);
            ans->next = temp;
            ans = ans->next;
        }
        ListNode* t2 = reverse(anshead->next);

        return t2;
    }
};