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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr)
            return nullptr;
        while (head && head->val == val) {
            ListNode* t = head;
            head = head->next;
            delete t;
        }
        if (head == nullptr)
            return nullptr;
        ListNode* prev = head;
        ListNode* temp = head->next;

        while (prev != nullptr && temp != nullptr) {
            if (temp->val == val) {
                ListNode* t1 = temp;

                prev->next = temp->next;
                temp = temp->next;
                delete (t1);
            } else {
                temp = temp->next;
                prev = prev->next;
            }
        }
        return head;
    }
};