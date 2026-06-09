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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == nullptr) return head;

        ListNode* t1 = head;

        int cnt = 0;
        while(t1)
        {
            cnt++;
            t1 = t1->next;
        }

        k %= cnt;

        if(k == 0) return head;

        ListNode* temp = head;
        while(temp->next)
        {
            temp = temp->next;
        }

        temp->next = head;  

        ListNode* tail = head;

        int step = cnt - k - 1;   

        while(step--)
        {
            tail = tail->next;
        }

        ListNode* newhead = tail->next;

        tail->next = nullptr;

        return newhead;
    }
};