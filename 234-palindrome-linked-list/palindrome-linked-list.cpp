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
    ListNode* reverse(ListNode* head1) {
        ListNode* prev = nullptr;
        ListNode* curr = head1;
        while (curr) {
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* copy = new ListNode(head->val);
        if (head == nullptr)
            return true;
        ListNode* curr1 = head->next;
        ListNode* copytail = copy;
        while (curr1) {
            copytail->next = new ListNode(curr1->val);
            copytail = copytail->next;
            curr1=curr1->next;
        }
        ListNode* newhead = reverse(copy);
        while (head && newhead) {
            if (head->val != newhead->val) {
                return false;
            }
            head = head->next;
            newhead = newhead->next;
        }
        return true;
    }
};