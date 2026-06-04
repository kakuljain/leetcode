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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }

        return prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* newhead = reverse(head);

        ListNode* temp = newhead;
        ListNode* prev1 = nullptr;
        int cnt = 0;

        if (newhead == nullptr)
            return nullptr;

        while (temp) {
            cnt++;

            if (cnt == n) {
                if (prev1 == nullptr) {
                    newhead = newhead->next;
                    delete temp;
                } else {
                    prev1->next = temp->next;
                    delete temp;
                }
                break;
            }

            prev1 = temp;
            temp = temp->next;
        }

        return reverse(newhead);
    }
};