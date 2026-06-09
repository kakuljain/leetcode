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
    ListNode* reverse(ListNode* h1)
    {
        ListNode* prev = nullptr;
        ListNode* curr = h1;

        while(curr)
        {
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        if(head == nullptr || k == 1)
            return head;

        ListNode* temp = head;
        ListNode* left = head;
        ListNode* left1 = nullptr;

        ListNode* t2 = nullptr;  // final head
        ListNode* t3 = nullptr;  // previous tail

        int cnt = 0;

        while(temp != nullptr)
        {
            cnt++;

            if(cnt == k)
            {
                left1 = temp->next;

                temp->next = nullptr;

                ListNode* t1 = reverse(left);

                if(t2 == nullptr)
                {
                    t2 = t1;
                }

                if(t3 != nullptr)
                {
                    t3->next = t1;
                }

                left->next = left1;

                t3 = left;

                left = left1;
                temp = left1;

                cnt = 0;
            }
            else
            {
                temp = temp->next;
            }
        }

        if(t2 == nullptr)
            return head;

        return t2;
    }
};